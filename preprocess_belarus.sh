for f in data/belarus_mitm_2013/route-views/rib.*.mrt; do
    bgpdump -m "$f" > "${f%.mrt}.txt"
done

for f in data/belarus_mitm_2013/ripe-ris/*.mrt; do
    bgpdump -m "$f" > "${f%.mrt}.txt"
done
