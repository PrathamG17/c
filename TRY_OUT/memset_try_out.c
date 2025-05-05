#include <stdio.h>
#include <malloc.h>

int main(void)
{
	int iCounter;
	int **pPtr = NULL;
	
	pPtr = (int **) malloc(5 * sizeof(int *));
	if(NULL == pPtr)
	{
		printf("\nMemory Allocation Failed\n");
		return -1;
	}
	
	memset(pPtr,NULL,5*sizeof(int *));
	
	for(iCounter = 0; iCounter < 5; iCounter++)
	{
		//printf("\n1-->%c\n",pPtr[iCounter]);
		if(pPtr[iCounter] == NULL)
			printf("\n1-->%d\n",pPtr[iCounter]);
	}
	
	return 0;
}
