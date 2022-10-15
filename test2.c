#include <stdio.h>
#include <unistd.h>

int main()
{
	pid_t pid;
	printf("Just one process so far\n");
	printf("Calling fork ...\n");

	pid = fork();

	if(pid==0)
		printf("child\n");
	else if (pid >0)
		printf("parent\n");
	else
		printf("error\n");
	
	return 0;
}
