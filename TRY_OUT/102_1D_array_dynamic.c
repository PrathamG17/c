#include <stdio.h>
#include <malloc.h>

int main(void)
{
	int iLimit;
	int iCounter;
	int *pPtr = NULL;
	
	printf("\nHow Many Elements You Want To Enter : ");				//3	
	scanf("%d",&iLimit);
	
	pPtr = (int *) malloc (iLimit * sizeof(int));
	if(NULL == pPtr)
	{
		printf("\nMemory Allocation Failed.\n");
		return -1;
	}
	
	for(iCounter = 0; iCounter < iLimit; iCounter++)
	{
		printf("\nEnter arr[%d] Value : ",iCounter);				//10	20	  30
		scanf("%d",&pPtr[iCounter]);
	}
	
	for(iCounter = 0; iCounter < iLimit; iCounter++)
		printf("\narr[%d] is  => %d\n",iCounter,pPtr[iCounter]);	//10	20	  30
	/*  
		ABOVE(23,27) : array subscript operator is not only applies with array ...it is always applied with address.
	*/
	
	if(pPtr != NULL)
	{
		free(pPtr);
		pPtr = NULL;
	}
	
	return 0;
}
