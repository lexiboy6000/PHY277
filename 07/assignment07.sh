#!/usr/bin/bash
#SBATCH -p short-40core-shared
#SBATCH -o %u-%x-%A.txt



set -x 
date
hostname -f
cat 07.cc
g++ 07.cc
./a.out
exit
