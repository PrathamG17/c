#include <stdio.h>
#include <malloc.h>

int main(void)
{
	int iRow;
	int iPlane;
	int iCount2;	
	int iColumn;
	int iCounter1;
	int iCounter2;
	int iCounter3;
	int iCondition1;
	int iCount1 = 0;	
	int ***pppPtr = NULL;

	printf("\nEnter Total Number Of Plane : ");			//3
	scanf("%d",&iPlane);
	
	printf("\nEnter Total Number Of Rows : ");			//2
	scanf("%d",&iRow);
	
	printf("\nEnter Total Number of Columns : ");		//2
	scanf("%d",&iColumn);
	
	pppPtr = (int ***)malloc(iPlane * sizeof(int **));								//for 'int **' dynamically memory allocated
	if(NULL == pppPtr)
	{
		printf("\nMemory Allocation Failed\n");
		return -1;
	}
	
	for(iCounter1 = 0; iCounter1 < iPlane; iCounter1++)
	{
		pppPtr[iCounter1] = (int **)malloc(iRow * sizeof(int *));					//for 'int *' dynamically memory allocated
		if(NULL == pppPtr[iCounter1])
		{
			printf("\nMemory Allocation Failed.\n");
			iCounter1--;
			
			Deallocation:
				iCount2 = 0;
				iCondition1 = iCounter1;
								
				for(iCounter1 = 0; iCounter1 <= iCondition1; iCounter1++)
				{					
					for(iCounter2 = 0; iCounter2 < iRow && iCount2 < iCount1; iCounter2++)
					{						
						free(pppPtr[iCounter1][iCounter2]);
						pppPtr[iCounter1][iCounter2] = NULL;
						iCount2++;
					}
					
					free(pppPtr[iCounter1]);
					pppPtr[iCounter1] = NULL;
				}
				
				free(pppPtr);
				pppPtr = NULL;
			
			return -1;
		}
		
		for(iCounter2 = 0; iCounter2 < iRow; iCounter2++)
		{
			pppPtr[iCounter1][iCounter2] = (int *)malloc(iColumn * sizeof(int));	//for 'int' dynamically memory allocated.
			if(NULL == pppPtr[iCounter1][iCounter2])
			{
				printf("\nMemory Allocation Failed\n");
				goto Deallocation;
			}
			
			iCount1++;																//For 1D dynamically memory allocated count.
			
			for(iCounter3 = 0; iCounter3 < iColumn; iCounter3++)			
			{
				printf("\nEnter arr[%d][%d][%d] value : ",iCounter1,iCounter2,iCounter3);		//1  2  ....12
				scanf("%d",&pppPtr[iCounter1][iCounter2][iCounter3]);
			}
		}
	}
	
	for(iCounter1 = 0; iCounter1 < iPlane; iCounter1++)
	{
		for(iCounter2 = 0; iCounter2 < iRow; iCounter2++)
		{
			for(iCounter3 = 0; iCounter3 < iColumn; iCounter3++)
			{
				printf("\narr[%d][%d][%d] is : %d\n",iCounter1,iCounter2,iCounter3,pppPtr[iCounter1][iCounter2][iCounter3]);	//1  2  ....12
			}
		}
	}
	
	
	if(pppPtr != NULL)
	{
		for(iCounter1 = 0; iCounter1 < iPlane; iCounter1++)
		{
			
			if(pppPtr[iCounter1] != NULL)
			{
				for(iCounter2 = 0; iCounter2 < iRow; iCounter2++)
				{
					if(pppPtr[iCounter1][iCounter2] != NULL)
					{
						free(pppPtr[iCounter1][iCounter2]);
						pppPtr[iCounter1][iCounter2] = NULL;
						//'int *' pointers are free
					}
				}
				
				free(pppPtr[iCounter1]);
				pppPtr[iCounter1] = NULL;
				//'int **' pointers are free
			}
		}
		
		free(pppPtr);
		pppPtr = NULL;
		//'int ***' pointer is free
	}
	
	return 0;
}
