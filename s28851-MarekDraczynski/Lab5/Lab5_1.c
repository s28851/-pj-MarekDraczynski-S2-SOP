// Napisz program, kt�ry
// - przedstawi sw�j numer PID, oraz PPID
// - po wypisaniu, b�dzie czeka� na standardowym wej�ciu na dane od u�ytkownika.
// - Uruchom program - nic nie podawaj na wej�ciu(program powinien czeka� w niesko�czono��).Uruchom nowy terminal.W nim za pomoc� komendy kill zamknij ten program korzystaj�c z PID wypisanego przez niego na pocz�tku.
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>


int main() {
	int val;

	printf("PID: %d\t PPID: %d\n", getpid(), getppid());
	scanf("%d", &val);

	return 0;
}