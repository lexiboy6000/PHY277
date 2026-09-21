#!/usr/bin/bash
#SBATCH -p short-40core-shared
#SBATCH -o %u-%x-%A.txt



set -x 
date
pwd
hostname -f
echo "hello world, my name is astranzl"
cat print_ints.cc
g++ print_ints.cc
./a.out
exit

