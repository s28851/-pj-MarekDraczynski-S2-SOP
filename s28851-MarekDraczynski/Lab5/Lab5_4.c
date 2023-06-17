// Napisz program, który uruchomi 100 procesów w taki sposób, ¿e ka¿dy kolejny potomek stworzy potomka. 
// Niech ka¿dy proces poczeka na zakoñczenie procesu potomka. 
// Mo¿esz korzystaæ z oczekiwania na wejœcie lub z komendy sleep i zobacz czy drzewko procesów jest takie jak siê spodziewasz 
// (mo¿esz w tym celu ograniczyæ liczbê procesów do 10). 
// Zobacz podpowiedŸ na pocz¹tku tej strony.
// Czyli drzewo procesów ma wynikowo wygl¹daæ tak: g³ówny -> potomek1 -> potomek2 -> ... -> potomek99 -> potomek100
// Przydatne przy sprawdzaniu: Drzewo procesów mo¿na wydrukowaæ poleceniem pstree

#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>


int main() {
	int ilosc = 1;
	extern pid_t master = getpid();
	int i;
	extern pid_t p = 0;
	for (i = 1; ilosc < 101; i++) {
		if (p == 0) {p=fork();}
		if (p > 0) {
			sleep(6000);
			if (getpid() = master) { pstree(); }
			break;
		}
	}
	printf("%d", ilosc);

	return 0;
}

