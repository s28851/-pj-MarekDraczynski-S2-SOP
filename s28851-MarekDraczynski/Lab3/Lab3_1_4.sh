#!/bin/bash

# Napisz skrypt, który 
# sprawdzi, czy w bieżącym katalogu jest więcej niż 5 plików. 
# Jeśli tak, to wypisze odpowiedni komunikat z informacją że tak jest.

#Podpowiem:
# ls - wyświetla listę plików
# wc - word count - zlicza znaki, słowa i linie
# grep ma parametr który też może podawać ilość wystąpień wzorca w strumieniu - poszukać w manualu jaki to parametr
# może warto użyć także innego polecenia by znaleźć pliki?

Z=$( ls -aA1 | wc -l )
if [[ "$Z" -gt 5 ]] ; then
	echo W bieżącym katalogu jest więcej niż 5 plików
else
	echo W bieżącym katalogu jest mniej niż 5 plików
fi
