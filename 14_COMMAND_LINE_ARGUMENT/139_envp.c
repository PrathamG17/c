#include <stdio.h>

int main(int argc, char *argv[], char *envp[])
{
	int iCounter;
	
	printf("\nEnvironment Settings Are : \n");
	
	for(iCounter = 0; envp[iCounter] != NULL; iCounter++)
		puts(envp[iCounter]);									//[o/p] : environment settings
	
	return 0;
}
