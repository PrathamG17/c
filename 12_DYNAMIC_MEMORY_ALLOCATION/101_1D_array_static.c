#include <stdio.h>
#define MAX 50

int main(void)
{
	int iLimit;
	int iCounter;
	int arr[MAX] = {0};
	
	printf("\nHow Many Elements You Want To Enter : ");		//3
	scanf("%d",&iLimit);
	
	for(iCounter = 0; iCounter < iLimit; iCounter++)
	{
		printf("\nEnter arr[%d] Value : ",iCounter);		//10	20	  30
		scanf("%d",&arr[iCounter]);
	}
	
	for(iCounter = 0; iCounter < iLimit; iCounter++)
		printf("\narr[%d] is  => %d\n",iCounter,arr[iCounter]);		//10	20    30
	
	return 0;
}
