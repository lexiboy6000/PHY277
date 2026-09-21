#!/usr/bin/bash
#SBATCH -p short-40core-shared
#SBATCH -o %u-%x-%A.txt



set -x 
date
hostname -f
cat 08.cc
g++ -x c++ 08.blah
./a.out
exit


