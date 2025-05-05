#include <stdio.h>

int main(void)
{
	char arr[5] = {'A', 'B', 'C', 'D','E'};
	char *pPtr = &arr[4];
	
	printf("\npPtr = %d\n",pPtr);					//104		(pPtr = 15727240)
	printf("\n*pPtr = %c\n",*pPtr);					//E			(*pPtr = E)
	
	printf("\npPtr - 3 = %d\n",pPtr - 3);			//101		(pPtr - 3 = 15727237)
	printf("\n*(pPtr - 3) = %c\n",*(pPtr - 3));		//B			(*(pPtr - 3) = B)

	printf("\npPtr = %d\n",pPtr);					//104		(pPtr = 15727240)
	printf("\n*pPtr = %c\n",*pPtr);					//E			(*pPtr = E)

	return 0;
}