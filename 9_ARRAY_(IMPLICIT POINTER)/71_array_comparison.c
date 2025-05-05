#include <stdio.h>
#define MAX 50

int CompareArrays(int [],int [],int );

int main(void)
{
	int iRet;
	int iLimit1;
	int iLimit2;
	int iCounter;
	int arrNumbers1[MAX] = {0};
	int arrNumbers2[MAX] = {0};
	
	printf("\nHow Many element You Want To Enter For Array1(< %d) :- ",MAX);	//3
	scanf("%d",&iLimit1);
	printf("\nHow Many element You Want To Enter For Array2(< %d) :- ",MAX);	//3
	scanf("%d",&iLimit2);
	
	if(iLimit1 == iLimit2)
	{
		printf("\nEnter Array1 Values, \n");
		for(iCounter = 0; iCounter < iLimit1; iCounter++)
		{
			printf("\nEnter arr[%d] value :- ",iCounter);	//10	20		30
			scanf("%d",&arrNumbers1[iCounter]);
		}

		printf("\nEnter Array2 Values, \n");
		for(iCounter = 0; iCounter < iLimit2; iCounter++)
		{
			printf("\nEnter arr[%d] value :- ",iCounter);	//10	20		30
			scanf("%d",&arrNumbers2[iCounter]);
		}
		
		printf("\nArray1 Values are,\n");
		for(iCounter = 0; iCounter < iLimit1; iCounter++)
			printf("\narr[%d] value is %d\n",iCounter,arrNumbers1[iCounter]);	//10	20		30

		printf("\nArray2 Values are,\n");
		for(iCounter = 0; iCounter < iLimit2; iCounter++)
			printf("\narr[%d] value is %d\n",iCounter,arrNumbers2[iCounter]);	//10	20		30
		
		iRet = CompareArrays(arrNumbers1,arrNumbers2,iLimit1);
		if(1 == iRet)
		{
			printf("\nArrays are equal\n");				//Equal	
			goto Label;
			/*  
				ABOVE(48) :- 'return 0' karna he sahaj shkya hota ...pan return zero kelyane....process tayar houn run hoat 
							  astana 
							  
							  1) sarva pratham swatha chya stack frame madhe aslela...sarwa clear kela(SP -> BP paryant pochala)
							  2) BP restore karne..
							  3) Instruction pointer restore karne..
							  4) 'ax' register madhe return value thevne...
							  
							  'return expression' chya assembly instruction varil pramane tayaar hotil (i.e. Epilog)...hence
							  'goto label' chi tayar honari ek assembly instruction yaa thikani faaydeshir aahe..
			*/			
		}
	}
	
	printf("\nArrays Are Not Equal\n");

	Label:
		return 0;
}

int CompareArrays(int arrNumbers1[],int arrNumbers2[],int iLimit)
{
	/*  
		ABOVE(70) :- varil signature line madhil array definitions madhe...square brackets('[]') madhe number of elements
					 mention karne compulsory nahi...It is same phenomenon when i define array with initialisation list
					 (Here initialisation list passed by caller..)
	*/
	int iCounter;
	
	for(iCounter = 0; iCounter < iLimit; iCounter++)
	{
		if(arrNumbers1[iCounter] != arrNumbers2[iCounter])
			return 0;
	}
	
	return 1;
}
