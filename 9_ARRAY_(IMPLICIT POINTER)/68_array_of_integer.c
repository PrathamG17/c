#include <stdio.h>
#define MAX 3

int main(void)
{
	int iCounter;
	int arrNumbers[MAX];
	/*  
		ABOVE(7):- 'arrNumbers' is array('[') which contains 'MAX' elements...and each element of type 'int'
	*/
	
	for(iCounter = 0; iCounter < MAX; iCounter++)
	{
		printf("\nEnter arr[%d] Value :- ",iCounter);		//10	20		30
		scanf("%d",&arrNumbers[iCounter]);
	}
	
	for(iCounter = 0; iCounter < MAX; iCounter++)
		printf("\narr[%d] is %d",iCounter,arrNumbers[iCounter]);	//10	20	  30
		
	return 0;
}
/*  
	array => 1) name 
			 2) [] indicates array
			 3) number of elements
			 4) type of each element
			 
	above => all 4 things required to calculate characteristics of array...i.e. size
*/
