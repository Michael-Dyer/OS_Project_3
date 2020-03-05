#include <unistd.h>
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <signal.h>
#include <sys/time.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/ipc.h>
#include <sys/shm.h>

int main() {

	pid_t pid;
	//open number_list as input
	FILE *f = fopen("number_list", "r");
	//n is number of numbers
	int n;
	char filechar[40], chr;	
	
	if(!f) {
		perror("can't open number_list please make sure file exists\n");
		exit(1);
	}
	else{
		printf("number_list opened and is being read!\n");
	}
	
	//this while loop reads number of lines to detrmine how many numbers
	//are in the file
	chr = getc(f);
	while (chr != EOF) {
		if (chr == '\n') {
			n++;
		}
		chr = getc(f);
	}



	fclose(f);
return 0;
}
