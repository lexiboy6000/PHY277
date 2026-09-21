#!/usr/bin/bash 
#SBATCH -p short-40core-shared 
#SBATCH -o %u-%x-%A.txt 
set -x 
date 
pwd 
hostname -f 
cat helloWorld05.cc 
g++ helloWorld05.cc 
./a.out 
exit
