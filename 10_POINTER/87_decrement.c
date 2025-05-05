#include <stdio.h>

int main(void)
{
	double arr[5] = {11.10, 12.10, 13.10, 14.10 ,15.10};
	double *pPtr = &arr[4];
	
	printf("\npPtr = %d\n",pPtr);			//132		(pPtr = 5766784)
	printf("\n*pPtr = %lf\n",*pPtr);		//15.10		(*pPtr = 15.100000)

	--pPtr;									//pPtr--
	
	printf("\npPtr = %d\n",pPtr);			//124		(pPtr = 5766776)
	printf("\n*pPtr = %lf\n",*pPtr);		//14.10		(*pPtr = 14.100000)
	
	return 0;
}
