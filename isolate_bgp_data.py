import os
import re
import requests
from datetime import datetime, timedelta
from tqdm import tqdm

# Catalog of significant BGP attacks
ATTACKS = {
    "pakistan_youtube_2008": {
        "start": datetime(2008, 2, 24, 18, 0),
        "end": datetime(2008, 2, 24, 22, 0), # Extended slightly
        "description": "Pakistan Telecom hijacked YouTube prefix (208.65.153.0/24).",
    },
    "russian_twitter_2022": {
        "start": datetime(2022, 3, 28, 11, 30),
        "end": datetime(2022, 3, 28, 13, 30),
        "description": "RTComm (AS8342) hijacked Twitter prefix (104.244.42.0/24).",
    },
    "belarus_mitm_2013": {
        "start": datetime(2013, 2, 19, 0, 0),
        "end": datetime(2013, 2, 19, 6, 0), 
        "description": "GlobalOneBel (Belarus) conducted stealth MITM hijacks of financial prefixes.",
    },
    "allegheny_verizon_2019": {
        "start": datetime(2019, 6, 24, 10, 0),
        "end": datetime(2019, 6, 24, 13, 0),
        "description": "Allegheny Technologies (AS396531) leaked 20k prefixes to Verizon.",
    },
    "route53_hijack_2018": {
        "start": datetime(2018, 4, 24, 11, 0),
        "end": datetime(2018, 4, 24, 13, 0),
        "description": "eNet (AS10297) hijacked Route 53 prefixes to steal crypto.",
    }
}

import time

def download_file(url, folder, retries=3):
    os.makedirs(folder, exist_ok=True)
    local_filename = os.path.join(folder, url.split("/")[-1])
    
    if os.path.exists(local_filename) and os.path.getsize(local_filename) > 0:
        print(f"  [Exists] {local_filename}")
        return

    for attempt in range(retries):
        try:
            response = requests.get(url, stream=True, timeout=30)
            if response.status_code == 200:
                total_size = int(response.headers.get('content-length', 0))
                with open(local_filename, 'wb') as f, tqdm(
                    desc=url.split("/")[-1],
                    total=total_size,
                    unit='iB',
                    unit_scale=True,
                    unit_divisor=1024,
                    leave=False
                ) as bar:
                    for data in response.iter_content(chunk_size=1024*1024):
                        size = f.write(data)
                        bar.update(size)
                return # Success
            else:
                print(f"  [Skip] {url} (Status: {response.status_code})")
                return
        except Exception as e:
            print(f"  [Retry {attempt+1}/{retries}] Failed to download {url}: {e}")
            time.sleep(2)
    print(f"  [Error] Failed to download {url} after {retries} attempts.")

def fetch_index_and_filter(base_url, start, end, patterns, retries=3):
    """Fetches directory listing and filters files based on timestamp patterns."""
    for attempt in range(retries):
        try:
            response = requests.get(base_url, timeout=20)
            if response.status_code != 200:
                if response.status_code == 404: return []
                print(f"  [Retry {attempt+1}/{retries}] Status {response.status_code} for {base_url}")
                time.sleep(2)
                continue
            
            # Extract all hrefs matching the patterns
            files = []
            for pattern in patterns:
                matches = re.findall(f'href="({pattern})"', response.text)
                for m in matches:
                    # Extract timestamp from filename (YYYYMMDD.HHMM)
                    ts_match = re.search(r'(\d{8})\.(\d{4})', m)
                    if ts_match:
                        file_ts = datetime.strptime(f"{ts_match.group(1)}{ts_match.group(2)}", "%Y%m%d%H%M")
                        if start <= file_ts <= end:
                            files.append(f"{base_url}{m}")
            return sorted(list(set(files)))
        except Exception as e:
            print(f"  [Retry {attempt+1}/{retries}] Failed to fetch index {base_url}: {e}")
            time.sleep(2)
    return []

def get_ym_range(start, end):
    """Returns a list of YYYY.MM strings covering the range."""
    yms = []
    curr = datetime(start.year, start.month, 1)
    while curr <= end:
        yms.append(curr.strftime("%Y.%m"))
        if curr.month == 12:
            curr = datetime(curr.year + 1, 1, 1)
        else:
            curr = datetime(curr.year, curr.month + 1, 1)
    return yms

def main():
    print("BGP Attack Data Isolation Script")
    print("--------------------------------")
    
    for name, info in ATTACKS.items():
        print(f"\nProcessing Attack: {name}")
        print(f"Description: {info['description']}")
        print(f"Time Range: {info['start']} to {info['end']} UTC")
        
        # Windows for Updates and RIBS
        update_start = info['start']
        update_end = info['end']
        
        # RIBs: we want the one before and at least one during/after. 
        # A 12-hour buffer before and 6-hour after should cover all collectors.
        rib_start = info['start'] - timedelta(hours=12)
        rib_end = info['end'] + timedelta(hours=6)
        
        # Determine months to check
        update_yms = get_ym_range(update_start, update_end)
        rib_yms = get_ym_range(rib_start, rib_end)
        
        # Route Views
        rv_files = []
        for ym in update_yms:
            rv_base_updates = f"http://archive.routeviews.org/bgpdata/{ym}/UPDATES/"
            rv_files += fetch_index_and_filter(rv_base_updates, update_start, update_end, [r'updates\.\d{8}\.\d{4}\.bz2'])
        
        for ym in rib_yms:
            rv_base_ribs = f"http://archive.routeviews.org/bgpdata/{ym}/RIBS/"
            rv_files += fetch_index_and_filter(rv_base_ribs, rib_start, rib_end, [r'rib\.\d{8}\.\d{4}\.bz2'])
        
        rv_files = sorted(list(set(rv_files)))
        print(f"Found {len(rv_files)} Route Views files.")
        for url in rv_files:
            download_file(url, os.path.join("data", name, "route-views"))
            
        # RIPE RIS
        ris_files = []
        # We use rrc00 as the primary multihop collector
        for ym in sorted(list(set(update_yms + rib_yms))):
            ris_base = f"https://data.ris.ripe.net/rrc00/{ym}/"
            # Combine patterns. Note: RIPE RIS uses bview for RIBS and updates for UPDATES.
            patterns = [r'updates\.\d{8}\.\d{4}\.gz', r'bview\.\d{8}\.\d{4}\.gz']
            
            # For RIBS we use the wider window, for updates the narrow one
            all_found = fetch_index_and_filter(ris_base, rib_start, rib_end, patterns)
            for f in all_found:
                is_rib = 'bview' in f
                ts_match = re.search(r'(\d{8})\.(\d{4})', f)
                if ts_match:
                    file_ts = datetime.strptime(f"{ts_match.group(1)}{ts_match.group(2)}", "%Y%m%d%H%M")
                    if is_rib:
                        if rib_start <= file_ts <= rib_end:
                            ris_files.append(f)
                    else:
                        if update_start <= file_ts <= update_end:
                            ris_files.append(f)

        ris_files = sorted(list(set(ris_files)))
        print(f"Found {len(ris_files)} RIPE RIS files.")
        for url in ris_files:
            download_file(url, os.path.join("data", name, "ripe-ris"))

if __name__ == "__main__":
    main()