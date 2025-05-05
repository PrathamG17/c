#include <stdio.h>

int main(void)
{
	int *pPtr = NULL;
	
	{
		int iNo = 10;
		
		pPtr = &iNo;
		
		printf("\n*pPtr = %d\n",*pPtr);		//*pPtr = 10
	}
	
	printf("\n*pPtr = %d\n",*pPtr);			//Dangling Reference	(*pPtr = 10)
	
	return 0;
}
