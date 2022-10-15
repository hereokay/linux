#include <stdio.h>
#include <unistd.h>


int fatal(char *s)
{
	perror(s);
	exit(1);
}

int main(){

	pid_t pid;

	switch(pid = fork())
	{	
	case -1:
		fatal("fork failed");
		return 1;
	case 0:
		execl("bin/ls","ls","-l",NULL);
		fatal("exec failed");
		return 1;
	default:
		wait(NULL);
		printf("ls completed\n");
		return 0;
	}
}
