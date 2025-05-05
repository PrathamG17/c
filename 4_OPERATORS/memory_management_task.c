#include <stdio.h>

enum RelationalStatus {LT = 1, LE = 2, GT = 4, GE = 8, E = 16};
/*  
	@param : iParam1 In Parameter.
	@param : iParam2 In Parameter.
	@param : pchStatus In-Out Parameter.
*/
void Compare(int, int, char *);

int main(void)
{
	int iNo1;
	int iNo2;
	char chStatus;
	
	printf("\nEnter 2 Numbers : ");									//Enter 2 Numbers : 10 10
	scanf("%d%d", &iNo1, &iNo2);
	
	Compare(iNo1, iNo2, &chStatus);
	
	if((chStatus & E) == E)
	{
		printf("\n%d Not Less Than %d\n", iNo1, iNo2);				//10 Not Less Than 10
		printf("\n%d Less Than Or To Equal %d\n", iNo1, iNo2);		//10 Less Than Or To Equal 10
		printf("\n%d Not Greater Than %d\n", iNo1, iNo2);			//10 Not Greater Than 10
		printf("\n%d Greater Than Or Equal To %d\n", iNo1, iNo2);	//10 Greater Than Or Equal To 10
		printf("\n%d Equal To %d\n", iNo1, iNo2);					//10 Equal To 10
	}
	else
	{
		if((chStatus & LT) == LT)
		{
			printf("\n%d Less Than %d\n", iNo1, iNo2);
			printf("\n%d Less Than Or To Equal %d\n", iNo1, iNo2);
			printf("\n%d Not Greater Than %d\n", iNo1, iNo2);
			printf("\n%d Not Greater Than Or Equal To %d\n", iNo1, iNo2);
		}
		else
		{
			printf("\n%d Not Less Than %d\n", iNo1, iNo2);
			printf("\n%d Not Less Than Or To Equal %d\n", iNo1, iNo2);
			printf("\n%d Greater Than %d\n", iNo1, iNo2);
			printf("\n%d Greater Than Or Equal To %d\n", iNo1, iNo2);
		}

		printf("\n%d Not Equal To %d\n", iNo1, iNo2);						
	}
	
	return 0;
}

void Compare(int iParam1, int iParam2, char* pchStatus)
{
	*pchStatus = *pchStatus ^ *pchStatus;
	
	if(iParam1 == iParam2)
	{
		*pchStatus = *pchStatus | E;
		*pchStatus = *pchStatus | LE;
		*pchStatus = *pchStatus | GE;
		return;
	}
	
	if(iParam1 < iParam2)
	{
		*pchStatus = *pchStatus | LT;
		*pchStatus = *pchStatus | LE;
	}
	else
	{
		*pchStatus = *pchStatus | GT;
		*pchStatus = *pchStatus | GE;			
	}
}
