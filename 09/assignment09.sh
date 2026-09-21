#!/usr/bin/bash
#SBATCH -p short-40core-shared
#SBATCH -o %u-%x-%A.txt



set -x 
date
hostname -f
cat 09.cc
g++ 09.cc
./a.out
echo "\n differencce because float is smaller than double. In a float, first bit is sign, next 8 bits are the exponant, remaining are precision bits. In a double, the formate is first for sign, next 11 for exponant, the remaining 52 for precision."
echo "Notabl and importantly, twos compliment is NOT used for the exponant terms but ratherits value is given by the 11 bit value minus 1023 .... for a float it is ofcourse minus 127." 
exit


