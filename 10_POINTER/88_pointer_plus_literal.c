#include <stdio.h>

int main(void)
{
	float arr[5] = {11.10f, 12.10f, 13.10f, 14.10f, 15.10f};
	float *pPtr = &arr[0];							//arr
	
	printf("\npPtr = %d\n",pPtr);					//100		(pPtr = 16448264)
	printf("\n*pPtr = %f\n",*pPtr);					//11.10		(*pPtr = 11.100000)
	
	printf("\npPtr + 3 = %d\n",pPtr + 3);			//112		(pPtr + 3 = 16448276)
	printf("\n*(pPtr + 3) = %f\n",*(pPtr + 3));		//14.10		(*(pPtr + 3) = 14.100000)
	/*  
		ABOVE(11,12) :- swatha(pPtr) eka jagi ubha rahun required jagech kaam karne..
	*/
	printf("\npPtr = %d\n",pPtr);					//100		(pPtr = 16448264)
	printf("\n*pPtr = %f\n",*pPtr);					//11.10		(*pPtr = 11.100000)
	
	return 0;
}
