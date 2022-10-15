#include <stdio.h>
#include <stdlib.h>

extern char** environ;

int main(int argc,char** argv)
{
	for (int i=0;environ[i];i++)
	{
		printf("env[%d]: %s\n",i,environ[i]);
	}
	return 0;
}
