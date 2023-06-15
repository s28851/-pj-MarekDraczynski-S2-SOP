#!/bin/bash

# Napisz skrypt, który:
# sprawdzi, czy jego nazwa kończy się .sh .
# Jeśli nie, to niech zmieni swoją nazwę poprzez dopisanie tego rozszerzenia (rozszerzenie nazwy pliku). 
# Sprawdzenie można zrobić na kilka sposobów, polecam przetestować 3 typowe:
# dopasowanie do wyrażenia regularnego (to jest bardziej uniwersalny sposób)
# porównanie ostatnich 3 liter nazwy skryptu
# użyć wbudowanego w basha mechanizmu do wyciągania części napisów ${%}, ${%%}, ${#}, ${##} 

echo Sprawdzenie przez wyrażenie regularne
if [[ $0 =~ \.sh$ ]] ; then
	echo Plik kończy się na .sh
else
	echo Plik nie kończy się na .sh
	echo Zmieniam nazwę pliku i dodaję na końcu .sh
	mv $0 $0.sh
fi