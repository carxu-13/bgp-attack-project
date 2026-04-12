import os
import re
import requests
from datetime import datetime, timedelta
from tqdm import tqdm

# Catalog of significant BGP attacks
ATTACKS = {
    "pakistan_youtube_2008": {
        "start": datetime(2008, 2, 24, 18, 0),
        "end": datetime(2008, 2, 24, 21, 0),
        "description": "Pakistan Telecom hijacked YouTube prefix (208.65.153.0/24).",
    },
    "russian_twitter_2022": {
        "start": datetime(2022, 3, 28, 11, 30),
        "end": datetime(2022, 3, 28, 13, 30),
        "description": "RTComm (AS8342) hijacked Twitter prefix (104.244.42.0/24).",
    },
    "belarus_mitm_2013": {
        "start": datetime(2013, 2, 19, 0, 0),
        "end": datetime(2013, 2, 19, 6, 0), # Short sample window for the month-long event
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

def download_file(url, folder):
    os.makedirs(folder, exist_ok=True)
    local_filename = os.path.join(folder, url.split("/")[-1])
    
    if os.path.exists(local_filename):
        print(f"  [Exists] {local_filename}")
        return

    try:
        response = requests.get(url, stream=True, timeout=10)
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
                for data in response.iter_content(chunk_size=1024):
                    size = f.write(data)
                    bar.update(size)
        else:
            print(f"  [Skip] {url} (Status: {response.status_code})")
    except Exception as e:
        print(f"  [Error] Failed to download {url}: {e}")

def fetch_index_and_filter(base_url, start, end, patterns):
    """Fetches directory listing and filters files based on timestamp patterns."""
    try:
        response = requests.get(base_url, timeout=10)
        if response.status_code != 200:
            return []
        
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
        print(f"  [Error] Failed to fetch index {base_url}: {e}")
        return []

def main():
    print("BGP Attack Data Isolation Script")
    print("--------------------------------")
    print("Note: AS7007 (1997) is not available (archiving started Nov 1997).")
    
    for name, info in ATTACKS.items():
        print(f"\nProcessing Attack: {name}")
        print(f"Description: {info['description']}")
        print(f"Time Range: {info['start']} to {info['end']} UTC")
        
        ym = info['start'].strftime("%Y.%m")
        
        # Route Views
        rv_base_updates = f"http://archive.routeviews.org/bgpdata/{ym}/UPDATES/"
        rv_base_ribs = f"http://archive.routeviews.org/bgpdata/{ym}/RIBS/"
        
        rv_files = fetch_index_and_filter(rv_base_updates, info['start'], info['end'], [r'updates\.\d{8}\.\d{4}\.bz2'])
        rv_files += fetch_index_and_filter(rv_base_ribs, info['start'], info['end'], [r'rib\.\d{8}\.\d{4}\.bz2'])
        
        print(f"Found {len(rv_files)} Route Views files.")
        for url in rv_files:
            download_file(url, os.path.join("data", name, "route-views"))
            
        # RIPE RIS
        ris_base = f"https://data.ris.ripe.net/rrc00/{ym}/"
        ris_files = fetch_index_and_filter(ris_base, info['start'], info['end'], [r'updates\.\d{8}\.\d{4}\.gz', r'bview\.\d{8}\.\d{4}\.gz'])
        
        print(f"Found {len(ris_files)} RIPE RIS files.")
        for url in ris_files:
            download_file(url, os.path.join("data", name, "ripe-ris"))

if __name__ == "__main__":
    main()