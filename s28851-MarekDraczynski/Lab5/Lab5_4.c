// Napisz program, kt�ry uruchomi 100 proces�w w taki spos�b, �e ka�dy kolejny potomek stworzy potomka. 
// Niech ka�dy proces poczeka na zako�czenie procesu potomka. 
// Mo�esz korzysta� z oczekiwania na wej�cie lub z komendy sleep i zobacz czy drzewko proces�w jest takie jak si� spodziewasz 
// (mo�esz w tym celu ograniczy� liczb� proces�w do 10). 
// Zobacz podpowied� na pocz�tku tej strony.
// Czyli drzewo proces�w ma wynikowo wygl�da� tak: g��wny -> potomek1 -> potomek2 -> ... -> potomek99 -> potomek100
// Przydatne przy sprawdzaniu: Drzewo proces�w mo�na wydrukowa� poleceniem pstree

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

