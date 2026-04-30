#!/usr/bin/env python
# coding: utf-8

# # Script to convert b2z data files to txt files

# In[2]:


import json
from pathlib import Path
from mrtparse import Reader


# In[3]:


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


def convert_bgp_to_txt(data):
    root = Path(data)
    collectors = [d for d in [root / "route-views", root / "ripe-ris"] if d.exists()]
    txt_dir=root / "txt_files"
    txt_dir.mkdir(exist_ok=True)
    for collector in collectors:
        for f in sorted(collector.rglob("*.bz2")):
            out_file = txt_dir / f"{f.stem}.txt"
            rows = parse_bgp_file(f)
            with open(out_file, "w", encoding="utf-8") as out:
                for row in rows:
                    out.write(json.dumps(row) + "\n")
            print(f"Converted {f.name}->{out_file.name}")


# In[4]:


if __name__ == "__main__":
    data = "pakistan_youtube_2008"
    convert_bgp_to_txt(data)


# In[ ]:




