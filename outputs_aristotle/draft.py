#!/usr/bin/env python
# coding: utf-8

import argparse
import ipaddress
from pathlib import Path
import pandas as pd
from mrtparse import Reader

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
                rows.append({
                    "collector":file_path.parent.name,
                    "source_file":file_path.name,
                    "timestamp":timestamp,
                    "timestamp_unix":ts_unix,
                    "record_type":"RIB",
                    "action":"A",
                    "peer_as": None,
                    "peer_ip": None,
                    "prefix": prefix,
                    "as_path": as_path,
                    "origin_as": as_path[-1],
                })
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
                rows.append({
                    "collector":file_path.parent.name,
                    "source_file":file_path.name,
                    "timestamp":timestamp,
                    "timestamp_unix":ts_unix,
                    "record_type":"UPDATE",
                    "action":"A",
                    "peer_as": peer_as,
                    "peer_ip": peer_ip,
                    "prefix": prefix,
                    "as_path": as_path,
                    "origin_as": origin_as,
                })
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
                baseline_paths.setdefault(rec["prefix"], []).append(rec["as_path"])
    else:
        baseline_mode ="FIRST_UPDATE"
        for f in sorted(update_files):
            for rec in parse_bgp_file(f):
                if rec["action"]!="A" or not rec["origin_as"]:
                    continue
                if rec["prefix"] not in baseline_paths:
                    baseline_paths[rec["prefix"]]=[rec["as_path"]]

    suspicious_rows=[]
    for f in sorted(update_files):
        for rec in parse_bgp_file(f):
            if rec["action"]!="A" or not rec["origin_as"]:
                continue
            prefix=rec["prefix"]
            origin=rec["origin_as"]
            as_path=rec["as_path"]
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

            suspicious_rows.append({
                "collector":rec["collector"],
                "source_file":rec["source_file"],
                "timestamp":rec["timestamp"],
                "timestamp_unix":rec["timestamp_unix"],
                "record_type":rec["record_type"],
                "action":rec["action"],
                "peer_as":rec["peer_as"],
                "peer_ip":rec["peer_ip"],
                "prefix":prefix,
                "as_path":as_path,
                "origin_as":origin,
                "baseline_origins":sorted(baseline_origins),
                "prefix_len":len(as_path),
            })

    suspicious_df=pd.DataFrame(suspicious_rows)
    if not suspicious_df.empty:
        peer_counts=(suspicious_df.groupby(["prefix", "origin_as"])["peer_as"]
            .nunique()
            .reset_index(name="unique_peers")
        )
        suspicious_df=suspicious_df.merge(peer_counts, on=["prefix", "origin_as"], how="left")
        suspicious_df=suspicious_df[suspicious_df["unique_peers"]>=3]

    if suspicious_df.empty:
        prefix_summary = pd.DataFrame()
    else:
        prefix_summary=(
            suspicious_df.groupby(
                ["prefix", "origin_as"],
                as_index=False
            )
            .agg(
                first_seen=("timestamp","min"),
                last_seen=("timestamp", "max"),
                suspicious_announcements=("prefix", "size"),
                suspected_origins=("origin_as", lambda s: sorted(set(s))),
                baseline_origins=("baseline_origins", lambda s: sorted(set(tuple(x) for x in s))),
                collectors=("collector", lambda s: sorted(set(s))),
                unique_peers=("unique_peers", "first"),
            )
            .sort_values(["suspicious_announcements", "prefix"], ascending=[False, True])
            .reset_index(drop=True)
        )

    count= len(suspicious_df)
    return count, prefix_summary, suspicious_df

if __name__ == "__main__":
    parser = argparse.ArgumentParser(description="BGP interception detector.")
    parser.add_argument("data_dir", help="Path to data directory (e.g. ./data/pakistan_youtube_2008)")
    args = parser.parse_args()

    count, prefix_summary, suspicious_df = detect_interception(args.data_dir)

    print("Interception Detection:")
    print("Suspicious announcement count:", count)
    print("\nPossible intercepted prefixes")
    print(prefix_summary.head(25).to_string())
    print("\nSuspicious announcements")
    print(suspicious_df.head(25).to_string())
