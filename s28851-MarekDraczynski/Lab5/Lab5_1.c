// Napisz program, który
// - przedstawi swój numer PID, oraz PPID
// - po wypisaniu, bêdzie czeka³ na standardowym wejœciu na dane od u¿ytkownika.
// - Uruchom program - nic nie podawaj na wejœciu(program powinien czekaæ w nieskoñczonoœæ).Uruchom nowy terminal.W nim za pomoc¹ komendy kill zamknij ten program korzystaj¹c z PID wypisanego przez niego na pocz¹tku.
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