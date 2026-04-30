#!/usr/bin/env python
# coding: utf-8

import argparse
import ipaddress
from dataclasses import dataclass
from pathlib import Path
from typing import List, Optional, Tuple
import pandas as pd
from mrtparse import Reader

@dataclass(frozen=True)
class IPv4Prefix:
    address: int
    length: int

    def __post_init__(self):
        if not (0 <= self.length <= 32):
            raise ValueError("Prefix length must be between 0 and 32")
        if not (0 <= self.address < 2**32):
            raise ValueError("Address must be a valid 32-bit IPv4 address")
        if (self.address << (32 - self.length)) != self.address:
            raise ValueError("Address must be masked to prefix length bits")

@dataclass(frozen=True)
class ASPath:
    asns: List[int]

    def __post_init__(self):
        if not self.asns:
            raise ValueError("AS path must be non-empty")

@dataclass(frozen=True)
class RecordType:
    value: str

    def __post_init__(self):
        if self.value not in {"RIB", "UPDATE"}:
            raise ValueError("Record type must be RIB or UPDATE")

@dataclass(frozen=True)
class Action:
    value: str

    def __post_init__(self):
        if self.value not in {"A", "W"}:
            raise ValueError("Action must be A or W")

@dataclass(frozen=True)
class BGPRecord:
    collector: str
    source_file: str
    timestamp: str
    timestamp_unix: int
    record_type: RecordType
    action: Action
    peer_as: Optional[int]
    peer_ip: Optional[str]
    prefix: IPv4Prefix
    as_path: ASPath
    origin_as: Optional[int]

@dataclass(frozen=True)
class SuspiciousRecord:
    record: BGPRecord
    baseline_origins: List[int]
    prefix_len: int

    def __post_init__(self):
        if self.prefix_len != len(self.record.as_path.asns):
            raise ValueError("prefix_len must equal record.as_path.asns.length")

@dataclass(frozen=True)
class PrefixSummary:
    prefix: IPv4Prefix
    origin_as: int
    first_seen: str
    last_seen: str
    suspicious_announcements: int
    suspected_origins: List[int]
    baseline_origins: List[int]
    collectors: List[str]
    unique_peers: int

@dataclass(frozen=True)
class DetectionResult:
    count: int
    prefix_summary: List[PrefixSummary]
    suspicious_records: List[SuspiciousRecord]

def extract_as_path(path):
    as_path=[]
    for attr in path:
        attr_type=list(attr["type"].values())[0]
        if attr_type != "AS_PATH":
            continue
        for segment in attr["value"]:
            seg = list(segment["type"].values())[0]
            if seg in {"AS_SEQUENCE","AS_SET"}:
                as_path.extend(str(x) for x in segment["value"])
    return as_path

def parse_bgp_file(file_path):
    rows=[]
    for entry in Reader(str(file_path)):
        if getattr(entry,"err",None):
            continue
        data=entry.data
        mrt_type= list(data["type"].values())[0]
        ts_unix = next(iter(data["timestamp"].keys()))
        timestamp = data["timestamp"][ts_unix]
        if mrt_type=="TABLE_DUMP_V2":
            subtype=list(data["subtype"].values())[0]
            if subtype=="PEER_INDEX_TABLE":
                continue
            if not subtype.startswith("RIB_IPV4"):
                continue
            prefix = f'{data["prefix"]}/{data["length"]}'
            for rib_entry in data["rib_entries"]:
                as_path = extract_as_path(rib_entry["path_attributes"])
                if not as_path:
                    continue
                prefix_obj = IPv4Prefix(address=int(ipaddress.IPv4Address(data["prefix"])), length=data["length"])
                as_path_obj = ASPath(asns=[int(x) for x in as_path])
                rows.append(BGPRecord(
                    collector=file_path.parent.name,
                    source_file=file_path.name,
                    timestamp=timestamp,
                    timestamp_unix=int(ts_unix),
                    record_type=RecordType("RIB"),
                    action=Action("A"),
                    peer_as=None,
                    peer_ip=None,
                    prefix=prefix_obj,
                    as_path=as_path_obj,
                    origin_as=int(as_path[-1]) if as_path else None
                ))
        elif mrt_type=="BGP4MP":
            msg=data.get("bgp_message",{})
            if not msg:
                continue
            if list(msg["type"].values())[0]!="UPDATE":
                continue
            peer_as=str(data["peer_as"])
            peer_ip=data["peer_ip"]
            as_path=extract_as_path(msg.get("path_attributes", []))
            origin_as=as_path[-1] if as_path else None

            for nlri in msg.get("nlri", []):
                prefix = f'{nlri["prefix"]}/{nlri["length"]}'
                prefix_obj = IPv4Prefix(address=int(ipaddress.IPv4Address(nlri["prefix"])), length=nlri["length"])
                as_path_obj = ASPath(asns=[int(x) for x in as_path])
                rows.append(BGPRecord(
                    collector=file_path.parent.name,
                    source_file=file_path.name,
                    timestamp=timestamp,
                    timestamp_unix=int(ts_unix),
                    record_type=RecordType("UPDATE"),
                    action=Action("A"),
                    peer_as=int(peer_as) if peer_as else None,
                    peer_ip=peer_ip,
                    prefix=prefix_obj,
                    as_path=as_path_obj,
                    origin_as=int(origin_as) if origin_as else None
                ))
    return rows

def detect_interception(data):
    root = Path(data)
    collectors = [d for d in [root / "route-views", root / "ripe-ris"] if d.exists()]
    rib_files = []
    update_files = []

    for collector in collectors:
        for f in sorted(collector.rglob("*.mrt")):
            name=f.name.lower()
            if "rib" in name or "bview" in name:
                rib_files.append(f)
            elif "update" in name:
                update_files.append(f)

    baseline_paths={}
    baseline_mode=None

    if rib_files:
        baseline_mode = "RIB"
        earliest_rib_per_collector = {}
        for f in rib_files:
            c=f.parent.name
            earliest_rib_per_collector.setdefault(c,[]).append(f)
        baseline_files=[sorted(v)[0] for v in earliest_rib_per_collector.values()]
        for f in baseline_files:
            for rec in parse_bgp_file(f):
                baseline_paths.setdefault(rec.prefix, []).append(rec.as_path.asns)
    else:
        baseline_mode ="FIRST_UPDATE"
        for f in sorted(update_files):
            for rec in parse_bgp_file(f):
                if rec.action.value!="A" or not rec.origin_as:
                    continue
                if rec.prefix not in baseline_paths:
                    baseline_paths[rec.prefix]=[rec.as_path.asns]

    suspicious_rows=[]
    for f in sorted(update_files):
        for rec in parse_bgp_file(f):
            if rec.action.value!="A" or not rec.origin_as:
                continue
            prefix=rec.prefix
            origin=rec.origin_as
            as_path=rec.as_path.asns
            if prefix not in baseline_paths:
                continue

            baseline_as_paths=baseline_paths[prefix]
            if not baseline_as_paths:
                continue

            baseline_origins=set()
            for path in baseline_as_paths:
                if path:
                    baseline_origins.add(path[-1])

            if origin not in baseline_origins:
                continue

            new_intermediary=False
            for baseline_path in baseline_as_paths:
                if not baseline_path:
                    continue
                if len(baseline_path) >= len(as_path):
                    continue
                if as_path[-1] in baseline_path[-1:] or as_path[-1] in baseline_path[-2:]:
                    if as_path[:-1] != baseline_path:
                        new_intermediary=True
                        break

            if not new_intermediary:
                continue

            suspicious_rows.append(SuspiciousRecord(
                record=rec,
                baseline_origins=sorted(baseline_origins),
                prefix_len=len(as_path)
            ))

    suspicious_df_rows=[]
    for sr in suspicious_rows:
        rec = sr.record
        suspicious_df_rows.append({
            "collector": rec.collector,
            "source_file": rec.source_file,
            "timestamp": rec.timestamp,
            "timestamp_unix": rec.timestamp_unix,
            "record_type": rec.record_type.value,
            "action": rec.action.value,
            "peer_as": rec.peer_as,
            "peer_ip": rec.peer_ip,
            "prefix": f"{rec.prefix.address}/{rec.prefix.length}",
            "as_path": rec.as_path.asns,
            "origin_as": rec.origin_as,
            "baseline_origins": sr.baseline_origins,
            "prefix_len": sr.prefix_len,
        })

    suspicious_df=pd.DataFrame(suspicious_df_rows)
    if not suspicious_df.empty:
        peer_counts=(suspicious_df.groupby(["prefix", "origin_as"])["peer_as"]
            .nunique()
            .reset_index(name="unique_peers")
        )
        suspicious_df=suspicious_df.merge(peer_counts, on=["prefix", "origin_as"], how="left")
        suspicious_df=suspicious_df[suspicious_df["unique_peers"]>=3]

    if suspicious_df.empty:
        prefix_summary = []
    else:
        grouped = suspicious_df.groupby(
            ["prefix", "origin_as"],
            as_index=False
        )
        agg_data = grouped.agg(
            first_seen=("timestamp","min"),
            last_seen=("timestamp", "max"),
            suspicious_announcements=("prefix", "size"),
            suspected_origins=("origin_as", lambda s: sorted(set(s))),
            baseline_origins=("baseline_origins", lambda s: sorted(set(tuple(x) for x in s))),
            collectors=("collector", lambda s: sorted(set(s))),
            unique_peers=("unique_peers", "first"),
        )
        prefix_summary = []
        for _, row in agg_data.iterrows():
            prefix_obj = IPv4Prefix(address=int(row["prefix"].split("/")[0]), length=int(row["prefix"].split("/")[1]))
            prefix_summary.append(PrefixSummary(
                prefix=prefix_obj,
                origin_as=row["origin_as"],
                first_seen=row["first_seen"],
                last_seen=row["last_seen"],
                suspicious_announcements=row["suspicious_announcements"],
                suspected_origins=row["suspected_origins"],
                baseline_origins=row["baseline_origins"],
                collectors=row["collectors"],
                unique_peers=row["unique_peers"]
            ))

    count= len(suspicious_df)
    return DetectionResult(
        count=count,
        prefix_summary=prefix_summary,
        suspicious_records=suspicious_rows
    )

if __name__ == "__main__":
    parser = argparse.ArgumentParser(description="BGP interception detector.")
    parser.add_argument("data_dir", help="Path to data directory (e.g. ./data/pakistan_youtube_2008)")
    args = parser.parse_args()

    result = detect_interception(args.data_dir)

    print("Interception Detection:")
    print("Suspicious announcement count:", result.count)
    print("\nPossible intercepted prefixes")
    summary_df = pd.DataFrame([{
        "prefix": f"{ps.prefix.address}/{ps.prefix.length}",
        "origin_as": ps.origin_as,
        "first_seen": ps.first_seen,
        "last_seen": ps.last_seen,
        "suspicious_announcements": ps.suspicious_announcements,
        "suspected_origins": ps.suspected_origins,
        "baseline_origins": ps.baseline_origins,
        "collectors": ps.collectors,
        "unique_peers": ps.unique_peers
    } for ps in result.prefix_summary])
    print(summary_df.head(25).to_string())
    print("\nSuspicious announcements")
    suspicious_df = pd.DataFrame([{
        "collector": sr.record.collector,
        "source_file": sr.record.source_file,
        "timestamp": sr.record.timestamp,
        "timestamp_unix": sr.record.timestamp_unix,
        "record_type": sr.record.record_type.value,
        "action": sr.record.action.value,
        "peer_as": sr.record.peer_as,
        "peer_ip": sr.record.peer_ip,
        "prefix": f"{sr.record.prefix.address}/{sr.record.prefix.length}",
        "as_path": sr.record.as_path.asns,
        "origin_as": sr.record.origin_as,
        "baseline_origins": sr.baseline_origins,
        "prefix_len": sr.prefix_len
    } for sr in result.suspicious_records])
    print(suspicious_df.head(25).to_string())
