#include <stdio.h>
#define MAX 20

int Compare(int arrNumbers1[],int arrNumbers2[],int);

int main(void)
{
	int iCount1;
	int iCount2;
	int iCounter;
	int arrNumbers1[MAX];
	int arrNumbers2[MAX];
	
	printf("\n-->Enter total number of elements you want to enter for array1(<20) => ");	//5
	scanf("%d",&iCount1);
	printf("\n-->Enter total number of elements you want to enter for array2(<20) => ");	//5
	scanf("%d",&iCount2);
	
	if(iCount1 != iCount2)
	{
		printf("\n-->Arrays are not equal.");
		return 0;
	}
	
	printf("\n-->Enter %d Element For Array1.\n",iCount1);
	for(iCounter = 0; iCounter < iCount1; iCounter++)
	{
		printf("\n\tElement %d :- ",iCounter+1);	//10	20		30		40		50
		scanf("%d",&arrNumbers1[iCounter]);
	}

	printf("\n-->Enter %d Element For Array2.\n",iCount2);	
	for(iCounter = 0; iCounter < iCount2; iCounter++)
	{
		printf("\n\tElement %d :- ",iCounter+1);	//10	20		30		40		50
		scanf("%d",&arrNumbers2[iCounter]);
	}
	
	printf("\n-->Elemets Of Array1 are...\n\n");
	for(iCounter = 0; iCounter < iCount1; iCounter++)
		printf("\tElement %d :- %d\n",iCounter+1,arrNumbers1[iCounter]);	//10	20		30		40		50

	printf("\n-->Elemets Of Array2 are...\n\n");
	for(iCounter = 0; iCounter < iCount2; iCounter++)
		printf("\tElement %d :- %d\n",iCounter+1,arrNumbers2[iCounter]);	//10	20		30		40		50
	
	iCount1 = Compare(arrNumbers1,arrNumbers2,iCount2);
	if(1 == iCount1)
		printf("\n-->Arrays are equal\n");				//Equal	
	else
		printf("\n-->Arrays are not equal\n");			
		
	return 0;
}

int Compare(int arrNumbers1[MAX],int arrNumbers2[MAX],int iCount)
{
	int iCounter;
	
	for(iCounter = 0; iCounter < iCount; iCounter++)
	{
		if(arrNumbers1[iCounter] != arrNumbers2[iCounter])
			return 0;
	}
	
	return 1;
}
