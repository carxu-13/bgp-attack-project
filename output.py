#!/usr/bin/env python
# coding: utf-8

import ipaddress
from pathlib import Path
import pandas as pd
from mrtparse import Reader
from collections import defaultdict

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
        for f in sorted(collector.rglob("*.bz2")):
            name=f.name.lower()
            if "rib" in name or "bview" in name:
                rib_files.append(f)
            elif "update" in name:
                update_files.append(f)

    baseline_paths = defaultdict(list)
    baseline_mode = None

    if rib_files:
        baseline_mode = "RIB"
        earliest_rib_per_collector = {}
        for f in rib_files:
            c=f.parent.name
            earliest_rib_per_collector.setdefault(c,[]).append(f)
        baseline_files=[sorted(v)[0] for v in earliest_rib_per_collector.values()]
        for f in baseline_files:
            for rec in parse_bgp_file(f):
                if rec["as_path"]:
                    baseline_paths[rec["prefix"]].append(rec["as_path"])
    else:
        baseline_mode = "FIRST_UPDATE"
        for f in sorted(update_files):
            for rec in parse_bgp_file(f):
                if rec["action"]!="A" or not rec["as_path"]:
                    continue
                if rec["prefix"] not in baseline_paths:
                    baseline_paths[rec["prefix"]] = [rec["as_path"]]

    suspicious_rows = []
    for f in sorted(update_files):
        for rec in parse_bgp_file(f):
            if rec["action"]!="A" or not rec["as_path"]:
                continue
            prefix = rec["prefix"]
            current_path = rec["as_path"]
            origin_as = current_path[-1]
            net = ipaddress.ip_network(prefix)
            
            if prefix not in baseline_paths or len(baseline_paths[prefix]) < 2:
                continue
            
            baseline_origins = {path[-1] for path in baseline_paths[prefix]}
            if origin_as not in baseline_origins:
                continue
            
            common_suffix_found = False
            for baseline_path in baseline_paths[prefix]:
                baseline_suffix = baseline_path[-2:] if len(baseline_path) >= 2 else baseline_path
                current_suffix = current_path[-2:] if len(current_path) >= 2 else current_path
                if baseline_suffix == current_suffix:
                    common_suffix_found = True
                    break
            
            if not common_suffix_found:
                continue
            
            newly_inserted = []
            for i, asn in enumerate(current_path):
                if i < len(current_path) - 2:
                    in_baseline = any(asn in path for path in baseline_paths[prefix])
                    if not in_baseline:
                        newly_inserted.append(asn)
            
            if newly_inserted:
                suspicious_rows.append({
                    "collector": rec["collector"],
                    "source_file": rec["source_file"],
                    "timestamp": rec["timestamp"],
                    "timestamp_unix": rec["timestamp_unix"],
                    "record_type": rec["record_type"],
                    "action": rec["action"],
                    "peer_as": rec["peer_as"],
                    "peer_ip": rec["peer_ip"],
                    "prefix": prefix,
                    "as_path": current_path,
                    "origin_as": origin_as,
                    "newly_inserted_asns": newly_inserted,
                    "baseline_paths": baseline_paths[prefix],
                    "prefix_len": net.prefixlen,
                    "first_ip": str(net.network_address),
                    "last_ip": str(net.broadcast_address),
                    "num_ips": net.num_addresses,
                })

    suspicious_df = pd.DataFrame(suspicious_rows)
    if not suspicious_df.empty:
        peer_counts = (suspicious_df.groupby(["prefix", "origin_as"])["peer_as"]
            .nunique()
            .reset_index(name="unique_peers")
        )
        suspicious_df = suspicious_df.merge(peer_counts, on=["prefix", "origin_as"], how="left")
        suspicious_df = suspicious_df[suspicious_df["unique_peers"] >= 2]

    if suspicious_df.empty:
        prefix_summary = pd.DataFrame()
    else:
        prefix_summary = (
            suspicious_df.groupby(
                ["prefix", "first_ip", "last_ip", "num_ips"],
                as_index=False
            )
            .agg(
                first_seen=("timestamp", "min"),
                last_seen=("timestamp", "max"),
                suspicious_announcements=("prefix", "size"),
                suspected_origins=("origin_as", lambda s: sorted(set(s))),
                newly_inserted_asns=("newly_inserted_asns", lambda s: sorted(set(tuple(x) for x in s))),
                collectors=("collector", lambda s: sorted(set(s))),
            )
            .sort_values(["suspicious_announcements", "prefix"], ascending=[False, True])
            .reset_index(drop=True)
        )

    count = len(suspicious_df)
    return count, prefix_summary, suspicious_df

data = "pakistan_youtube_2008"
count, prefix_summary, suspicious_df = detect_interception(data)

print("Interception Detection:")
print("Suspicious announcement count:", count)
print("\nPossible intercepted prefixes:")
print(prefix_summary.head(25))
print("\nSuspicious announcements:")
print(suspicious_df.head(25))
