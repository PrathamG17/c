#include <stdio.h>

int main(int argc, char *argv[])	//(i/p) : 138_cla_addition_of_n_numbers.exe 10 10 10 10 10 10 10 10 10 10
{
	int iAns;
	int iCounter;

	for(iAns = 0, iCounter = 1; iCounter < argc; iCounter++)
		iAns = iAns + atoi(argv[iCounter]);
	
	printf("\nAnswer is %d\n",iAns);							//Answer is 100
	
	return 0;
}
