#!/bin/bash
TEKST=$1
cat "$TEKST" | sed "s/Marek/$(echo -e '\e[31mMarek\e[0m')/g"