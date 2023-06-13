#!/bin/bash

ZMIANA=$(echo "$*" | sed -e 's/SOP/\\e[32mSOP\\e[0m/g')
Z=$(echo -e "$ZMIANA")
echo --------
echo "$Z"
echo --------
