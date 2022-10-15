#include <stdio.h>
#include <unistd.h>

int main()
{
	printf("exe ls \n");

	execl("/bin/ls","ls","-l",NULL);

	perror("failed");

	return -1;
}
