#include <stdio.h>
#define MAX 50

int main(void)
{
	int iRow;
	int iColumn;
	int iCounter1;
	int iCounter2;
	int arr[MAX][MAX] = {0};
	
	printf("\nEnter Total Number Of Rows : ");			//4
	scanf("%d",&iRow);
	
	printf("\nEnter Total Number of Columns : ");		//3
	scanf("%d",&iColumn);
	
	for(iCounter1 = 0; iCounter1 < iRow; iCounter1++)
	{
		for(iCounter2 = 0; iCounter2 < iColumn; iCounter2++)
		{
			printf("\nEnter arr[%d][%d] value : ",iCounter1,iCounter2);		//1  2  ...12
			scanf("%d",&arr[iCounter1][iCounter2]);
		}
	}

	for(iCounter1 = 0; iCounter1 < iRow; iCounter1++)
	{
		for(iCounter2 = 0; iCounter2 < iColumn; iCounter2++)
			printf("\narr[%d][%d] is : %d\n",iCounter1,iCounter2,arr[iCounter1][iCounter2]);	//1  2  ...12
	}
	
	return 0;
}
