#!/bin/bash
I=$#
echo 'Ilość argumentów: '"$I"
Z=${#1}
echo 'Ilość liter w pierwszym argumencie: '"$Z"
P="${1:0:((Z-1))}"
echo 'Początek argumentu bez ostatniej litery: '"$P"
K="${1:((Z-1)):1}"
echo 'Ostatnia litera argumentu: '"$K"

if [ $k == 'a' ] ; then
X="$P"ę
else
X="$1"a
fi

echo "$1" ma kota, a kot ma "$X"

