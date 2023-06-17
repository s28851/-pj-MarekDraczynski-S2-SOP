#!/bin/bash

# Napisz skrypt, który sprawdzi, czy podano więcej niż jeden parametr. Jeśli tak, to niech wyświetli pierwszy parametr. 
# Jeśli nie, to niech wyświetli komunikat, że nie podano parametrów.

if [[ $# -gt 1 ]] ; then
	echo "$1"
else
	echo Nie podano parametrów!
fi