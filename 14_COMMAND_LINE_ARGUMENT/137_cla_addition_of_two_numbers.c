#include <stdio.h>

int main(int argc, char *argv[])  //(i/p) : 137_cla_addition_of_two_numbers.exe 10 20
{
	int iAns;
	
	if(argc != 3)
	{
		printf("\nInvalid Argument : $ program_name no1 no2\n");
		return -1;
	}
	
	iAns = atoi(argv[1]) + atoi(argv[2]);
	
	printf("\nAnswer is %d\n",iAns);								//Answer is 30
	
	return 0;
}
