#!/bin/bash

# Napisz skrypt, który będzie wypisywał liczby od 10 do 1 co 2

for (( i = 10 ; i > -1 ; i -= 2 )); do echo $i; done
for i in $(seq 10 -2 0); do echo $i; done
for i in {10..0..-2}; do echo $i ; done

