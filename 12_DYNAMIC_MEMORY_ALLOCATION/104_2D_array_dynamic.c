#include <stdio.h>
#include <malloc.h>

int main(void)
{
	int iRow;
	int iColumn;
	int iCounter1;
	int iCounter2;
	int **ppPtr = NULL;
	
	printf("\nEnter Total Number Of Rows : ");			//4
	scanf("%d",&iRow);
	
	printf("\nEnter Total Number of Columns : ");		//3
	scanf("%d",&iColumn);

	ppPtr = (int **) malloc (iRow * sizeof(int *));		//for int * dynamically memory allocated
	if(NULL == ppPtr)
	{
		printf("\nMemory Allocation Failed.\n");
		return -1;
	}
	
	for(iCounter1 = 0; iCounter1 < iRow; iCounter1++)
	{
		ppPtr[iCounter1] = (int *) malloc(iColumn * sizeof(int));	//for int dynamically memmory allocated
		if(NULL == ppPtr[iCounter1])
		{
			printf("\nMemory Allocation Failed.\n");
			return -1;
		}
		
		for(iCounter2 = 0; iCounter2 < iColumn; iCounter2++)
		{
			printf("\nEnter arr[%d][%d] value : ",iCounter1,iCounter2);		//1  2  ...12
			scanf("%d",&ppPtr[iCounter1][iCounter2]);
		}
	}
	
	for(iCounter1 = 0; iCounter1 < iRow; iCounter1++)
	{
		for(iCounter2 = 0; iCounter2 < iColumn; iCounter2++)
			printf("\narr[%d][%d] is : %d\n",iCounter1,iCounter2,ppPtr[iCounter1][iCounter2]);		//1  2  ...12
	}
	
	
	if(ppPtr != NULL)
	{
		for(iCounter1 = 0; iCounter1 < iRow; iCounter1++)
		{
			if(ppPtr[iCounter1] != NULL)
			{
				free(ppPtr[iCounter1]);		//int * pointer is free
				ppPtr[iCounter1] = NULL;
			}
		}

		free(ppPtr);		//int ** pointer is free
		ppPtr = NULL;
	}
	
	return 0;
}
