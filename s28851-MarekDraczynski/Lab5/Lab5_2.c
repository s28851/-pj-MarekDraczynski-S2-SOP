// Napisz program, który uruchomi podproces za pomoc¹ komendy fork. Niech proces rodzica oczekuje na proces potomka. 
// Oba procesy powinny wypisaæ swój PID oraz PPID.

#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>


int main() {
	int i; int liczbaProcesow = 10;
	for (i = 0; i < liczbaProcesow; i++){

		pid_t p = 0;
		printf("PID: %d\t PPID: %d\n", getpid(), getppid());
		p = fork();
		if (p > 0) {
			wait(NULL);
			break;
		}
	}
	return 0;
}

