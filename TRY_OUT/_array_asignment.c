#include <stdio.h>
#define MAX 20

void Assign(int arrNumbers1[], int arrNumbers2[],int);

int main(void)
{
	int iCount;
	int iCounter;
	int arrNumbers1[MAX];
	int arrNumbers2[MAX];
	
	printf("\n-->Enter total number of elements in array1(<20) :- ");		//5
	scanf("%d",&iCount);
	
	printf("\n-->Enter %d elements :-\n",iCount);					
	for(iCounter = 0; iCounter < iCount; iCounter++)
	{
		printf("\n\tElement %d :- ",iCounter+1);							//10	20		30		40		50
		scanf("%d",&arrNumbers1[iCounter]);
	}
	
	printf("\n\n-->Before call..Array1 is...\n");
	for(iCounter = 0; iCounter < iCount; iCounter++)
		printf("\n\tElement %d :- %d",iCounter+1,arrNumbers1[iCounter]);	//10	20		30		40		50
		
	printf("\n\n-->Before call..Array2 is...\n");
	for(iCounter = 0; iCounter < iCount; iCounter++)
		printf("\n\tElement %d :- %d",iCounter+1,arrNumbers2[iCounter]);	//7731812	9255677		8	9269291		9269285
	
	//call by addres..
	Assign(arrNumbers1,arrNumbers2,iCount);

	printf("\n\n-->After call..Array1 is...\n");
	for(iCounter = 0; iCounter < iCount; iCounter++)
		printf("\n\tElement %d :- %d",iCounter+1,arrNumbers1[iCounter]);	//10	20		30		40		50
	
	//changes reflected
	printf("\n\n-->After call..Array2 is...\n");
	for(iCounter = 0; iCounter < iCount; iCounter++)
		printf("\n\tElement %d :- %d",iCounter+1,arrNumbers2[iCounter]);	//10	20		30		40		50
	
	return 0;
}

void Assign(int arrNumbers1[MAX], int arrNumbers2[MAX],int iCount)
{
	int iCounter;
	
	for(iCounter = 0; iCounter < iCount; iCounter++)
		arrNumbers2[iCounter] = arrNumbers1[iCounter];
}
