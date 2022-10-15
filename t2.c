#include <stdio.h>
#include <unistd.h>

int main()
{
	char *const av[]={"ls","-l",NULL};

	printf("exe ls\n");

	execv("/bin/ls",av);

	perror("failed");

	return -1;
}
