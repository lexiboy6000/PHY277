#!/usr/bin/bash
#SBATCH -p short-40core-shared
#SBATCH -o %u-%x-%A.txt

set -x 
date
pwd
hostname -f
echo "hello world"
exit

