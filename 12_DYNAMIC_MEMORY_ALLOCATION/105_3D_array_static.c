#include <stdio.h>
#define MAX 50

int main(void)
{
	int iRow;
	int iPlane;
	int iColumn;
	int iCounter1;
	int iCounter2;
	int iCounter3;
	int arr[MAX][MAX][MAX] = {0};
	
	printf("\nEnter Total Number Of Plane : ");			//3
	scanf("%d",&iPlane);
	
	printf("\nEnter Total Number Of Rows : ");			//2
	scanf("%d",&iRow);
	
	printf("\nEnter Total Number of Columns : ");		//2
	scanf("%d",&iColumn);

	for(iCounter1 = 0; iCounter1 < iPlane; iCounter1++)
	{
		for(iCounter2 = 0; iCounter2 < iRow; iCounter2++)
		{
			for(iCounter3 = 0; iCounter3 < iColumn; iCounter3++)
			{
				printf("\nEnter arr[%d][%d][%d] value : ",iCounter1,iCounter2,iCounter3);		//1  2 ...12
				scanf("%d",&arr[iCounter1][iCounter2][iCounter3]);
			}
		}
	}
	
	for(iCounter1 = 0; iCounter1 < iPlane; iCounter1++)
	{
		for(iCounter2 = 0; iCounter2 < iRow; iCounter2++)
		{
			for(iCounter3 = 0; iCounter3 < iColumn; iCounter3++)
			{
				printf("\narr[%d][%d][%d] is : %d\n",iCounter1,iCounter2,iCounter3,arr[iCounter1][iCounter2][iCounter3]);	//1  2  ...12
			}
		}
	}
	
	return 0;
}
