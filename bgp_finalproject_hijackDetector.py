#!/usr/bin/env python
# coding: utf-8

# # BGP Hijack Detector
# 
# This notebook will find .b2z files taken from the Route Views data respoistory and detect and flag suspicious/ hijacked routes. This uses the *longest matching prefix* method.

# In[45]:


import ipaddress
from pathlib import Path
import pandas as pd
from mrtparse import Reader


# In[68]:


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


# In[69]:


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


# In[72]:


def detect_hijacks(data):
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

    baseline_exact={}
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
                baseline_exact.setdefault(rec["prefix"], set()).add(rec["origin_as"])
    else:
        baseline_mode ="FIRST_UPDATE"
        for f in sorted(update_files):
            for rec in parse_bgp_file(f):
                if rec["action"]!="A" or not rec["origin_as"]:
                    continue
                if rec["prefix"] not in baseline_exact:
                    baseline_exact[rec["prefix"]]={rec["origin_as"]}

    baseline_networks={}
    for prefix, origins in baseline_exact.items():
        net=ipaddress.ip_network(prefix)
        baseline_networks[str(net)]={"net":net,"origins":set(origins)}

    suspicious_rows=[]
    for f in sorted(update_files):
        for rec in parse_bgp_file(f):
            if rec["action"]!="A" or not rec["origin_as"]:
                continue
            prefix=rec["prefix"]
            origin=rec["origin_as"]
            net=ipaddress.ip_network(prefix)
            if net.prefixlen < 24:
                continue
            covered_by_prefix=None
            victim_origins=[]
            flag=False

            
            parent_match=None
            for plen in range(net.prefixlen - 1, max(net.prefixlen - 8, 0), -1):
                parent=net.supernet(new_prefix=plen)
                parent_str=str(parent)
                if parent_str in baseline_networks:
                    parent_match= baseline_networks[parent_str]
                    break

            if parent_match is not None:
                parent_origins= parent_match["origins"]
                if origin not in parent_origins:
                    flag=True
                    covered_by_prefix=str(parent_match["net"])
                    victim_origins= sorted(parent_origins)

            if flag:
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
                    "as_path":rec["as_path"],
                    "origin_as":origin,
                    "covered_by_prefix":covered_by_prefix,
                    "victim_origin_asns":victim_origins,
                    "prefix_len":net.prefixlen,
                    "first_ip": str(net.network_address),
                    "last_ip":str(net.broadcast_address),
                    "num_ips":net.num_addresses,
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
                ["prefix", "covered_by_prefix", "first_ip", "last_ip", "num_ips"],
                as_index=False
            )
            .agg(
                first_seen=("timestamp","min"),
                last_seen=("timestamp", "max"),
                suspicious_announcements=("prefix", "size"),
                suspected_origins=("origin_as", lambda s: sorted(set(s))),
                victim_origin_asns=("victim_origin_asns", lambda s: sorted(set(tuple(x) for x in s))),
                collectors=("collector", lambda s: sorted(set(s))),

            )
            .sort_values(["suspicious_announcements", "prefix"], ascending=[False, True])
            .reset_index(drop=True)
        )

    count= len(suspicious_df)
    return count, prefix_summary, suspicious_df


# ## Run on data

# In[73]:


data = "pakistan_youtube_2008"

count,prefix_summary, suspicious_df=detect_hijacks(data)

print("Project Detection:")
print("Suspicious announcement count:",count)


# In[74]:


print("Possible hijacked prefixes/subprefixes")
prefix_summary.head(25)


# In[75]:


print("Suspicious announcements")
suspicious_df.head(25)


# In[ ]:




