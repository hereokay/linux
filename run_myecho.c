#include <stdio.h>
#include <unistd.h>

int main()
{
	char* const argin[] = {"./myecho","hello","world",NULL};
	execvp(argin[0],argin);

	return 1;
}
