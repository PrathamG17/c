#include <stdio.h>

void Fun(short int iNo);

int main(void)
{
	short int iNo = 10;
	
	Fun(- +iNo);		//unary plus operator effect 
	
	return 0;
}

void Fun(short int iNo)
{
	printf("\niNo = %d",iNo);
}
