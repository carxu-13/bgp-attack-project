#!/usr/bin/env python
# coding: utf-8

# # BGP Hijack Detector
# 
# This notebook will find .b2z files taken from the Route Views data respoistory and detect and flag suspicious/ hijacked routes. This uses the *longest matching prefix* method.

# In[7]:


import ipaddress
import json
from pathlib import Path
import pandas as pd


# In[8]:


def parse_txt_file(file_path):
    rows=[]
    with open(file_path, "r", encoding="utf-8") as f:
        for line in f:
            line=line.strip()
            if not line:
                continue
            rows.append(json.loads(line))
    return rows


# In[9]:


def detect_hijacks(data):
    root = Path(data)
    txt_dir = root / "txt_files"
    rib_files = []
    update_files = []
    for f in sorted(txt_dir.rglob("*.txt")):
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
            parts = f.stem.split(".")
            c = parts[0] if parts else f.stem
            earliest_rib_per_collector.setdefault(c,[]).append(f)
        baseline_files=[sorted(v)[0] for v in earliest_rib_per_collector.values()]
        for f in baseline_files:
            for rec in parse_txt_file(f):
                baseline_exact.setdefault(rec["prefix"], set()).add(rec["origin_as"])
    else:
        baseline_mode ="FIRST_UPDATE"
        for f in sorted(update_files):
            for rec in parse_txt_file(f):
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
        for rec in parse_txt_file(f):
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

# In[10]:


data = "pakistan_youtube_2008"

count,prefix_summary, suspicious_df=detect_hijacks(data)

print("Project Detection:")
print("Suspicious announcement count:",count)


# In[11]:


print("Possible hijacked prefixes/subprefixes")
prefix_summary.head(25)


# In[12]:


print("Suspicious announcements")
suspicious_df.head(25)


# In[ ]:




