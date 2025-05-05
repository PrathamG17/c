#include <stdio.h>

int main(int argc, char *argv[])	//(i/p) : 136_cla_print_argc_argv.exe
{
	int iCounter;
	
	printf("\nArgument Count is %d\n",argc);			//Argument Count is 1
	
	for(iCounter = 0; iCounter < argc; iCounter++)
		puts(argv[iCounter]);							//136_cla_print_argc_argv.exe
	
	return 0;
}
