#!/usr/bin/env bash
# Bien dich va chay mot bai.
#   ./run.sh 1791A        bien dich 1791A.cpp; neu co 1791A.in thi lay input tu file do, khong thi go tay
#   ./run.sh 1074/B       dung duoc cho bai trong thu muc con
set -e
if [ -z "$1" ]; then
    echo "Cach dung: ./run.sh <ten bai, khong co .cpp>   vi du: ./run.sh 1791A"
    exit 1
fi
bai="${1%.cpp}"
g++ -std=c++17 -O2 -Wall "$bai.cpp" -o "$bai"
if [ -f "$bai.in" ]; then
    ./"$bai" < "$bai.in"
else
    ./"$bai"
fi
