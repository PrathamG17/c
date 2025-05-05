#include <stdio.h>

int Fact(int);

int main(void)
{
	int iNo;
	int iAns;
	
	printf("\nEnter Number :\t");						//5
	scanf("%d",&iNo);
	
	iAns = Fact(iNo);
	printf("\nFactorial of %d is %d\n",iNo,iAns);		//120

	return 0;
}

int Fact(int iNo)
{
	int iAns;
	int iCounter;

	iAns = iNo;
	for(iCounter = iNo-1 ; iCounter != 1 ; iCounter--)
		iAns = iAns * iCounter;
	
	return iAns;
}
