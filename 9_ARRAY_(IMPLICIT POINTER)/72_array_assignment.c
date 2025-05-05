#include <stdio.h>
#define MAX 50

void AssignArrays(int [], int [],int );

int main(void)
{
	int iLimit;
	int iCounter;
	int arrNumbers1[MAX] = {0};
	int arrNumbers2[MAX] = {0};
	
	printf("\nHow Many element You Want To Enter For Array(< %d) :- ",MAX);	//3
	scanf("%d",&iLimit);
	
	printf("\nEnter Array Values, \n");
	for(iCounter = 0; iCounter < iLimit; iCounter++)
	{
		printf("\nEnter arr[%d] value :- ",iCounter);	//10	20		30
		scanf("%d",&arrNumbers1[iCounter]);
	}
/* 	
	printf("\n\n-->Before call..Array1 is...\n");
	for(iCounter = 0; iCounter < iLimit; iCounter++)
		printf("\narr[%d] value is %d\n",iCounter,arrNumbers1[iCounter]);	//10	20		30
		
	printf("\n\n-->Before call..Array2 is...\n");
	for(iCounter = 0; iCounter < iLimit; iCounter++)
		printf("\narr[%d] value is %d\n",iCounter,arrNumbers2[iCounter]);	//0		0		0
 */	
	//call by addres..
	AssignArrays(arrNumbers1,arrNumbers2,iLimit);
		
	printf("\nArray1 Values are,\n");
	for(iCounter = 0; iCounter < iLimit; iCounter++)
		printf("\narr[%d] value is %d\n",iCounter,arrNumbers1[iCounter]);	//10	20		30

	//changes reflected...
	printf("\nArray2 Values are,\n");
	for(iCounter = 0; iCounter < iLimit; iCounter++)
		printf("\narr[%d] value is %d\n",iCounter,arrNumbers2[iCounter]);	//10	20		30
	
	return 0;
}

void AssignArrays(int arrNumbers1[], int arrNumbers2[],int iLimit)
{
	int iCounter;
	
	for(iCounter = 0; iCounter < iLimit; iCounter++)
		arrNumbers2[iCounter] = arrNumbers1[iCounter];
}
