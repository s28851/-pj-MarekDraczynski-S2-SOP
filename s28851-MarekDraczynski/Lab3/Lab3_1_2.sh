#!/bin/bash

# Napisz skrypt, który:
# sprawdzi, czy istnieje plik config.cfg w bieżącym katalogu.
# Jeśli taki plik istnieje, to niech go wykona.
# Jeśli nie istnieje, to niech sprawdzi, czy podano argument i wykona plik o nazwie takiej jak wartość argumentu (parametru) skryptu.

Jeśli żadne z powyższych nie nastąpiło, to niech wyświetli komunikat o błędzie.
if [[ -e config.cfg ]] ; then
	echo Instnieje plik config.cfg
	echo Uruchamiam plik config.cfg
	./config.cfg
	
elif [[ $# -ge 1 ]] ; then
	echo Nie istnieje config.cfg
	echo Sprawdzam czy podano podano jakiś argument i czy jest plikiem.
	if [[ -e "$1" ]] ; then
		echo Podano argument do skryptu
		echo sprawdzam czy argument jest nazwą istniejącego pliku
		if [[ -e "$1" ]] ; then
			echo podano argument do skryptu
			echo Istnieje plik i jego nazwę jako argument - uruchamiam go
			./$1
		elif
			echo Nie istnieje plik o nazwie podanej w argumencie
		fi
	else
		echo Nie podano argumentu do skryptu
	fi
else
	echo Nie istnieje plik config.cfg 
	echo i
	echo Nie podano argumentu do skryptu
fi
