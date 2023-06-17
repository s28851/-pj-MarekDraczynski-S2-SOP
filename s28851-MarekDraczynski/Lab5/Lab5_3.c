// Napisz program, który bêdzie pobiera³ jeden argument z wiersza poleceñ  i bêdzie oblicza³ w 2 procesach:
// - Proces rodzica: Wartoœæ sumy liczb od 0 do wartoœci zadanej jako pierwszy argument wykonania programu.
// - Proces potomny: Wypisuj¹cy liczby nieparzyste od 1 do wartoœci zadanej jako pierwszy argument wykonania programu.
// - Program powinien wypisaæ wyniki w kolejnoœci takiej, ¿e najpierw wypisze wynik proces potomny, a nastêpnie proces rodzica. 
// - Nie korzystaj z komendy sleep.

#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>


int main() {
	int val = 0;
	scanf("%d", &val)
	pid_t p = 0;
	p = fork();
	if (p > 0) {
		wait(p);
		int suma = 0;
		for (int i = 0; i < val; i++) {
			suma += i + 1;
			printf("%d", suma);
		}
	}
	else if (p == 0) {
		for (int liczba = 1; liczba < (val + 1); liczba += 2) {
			printf("%d", liczba);
		}
	}
	else return 0;

	return 0;
}

