#include <stdio.h>

int Fact(int);

int main(void)
{
	int iNo;
	int iAns;
	
	printf("\nEnter Number :\t");							//5
	scanf("%d",&iNo);
	
	iAns = Fact(iNo);
	printf("\nFactorial of %d is %d\n",iNo,iAns);			//120

	return 0;
}

int Fact(int iNo)
{
	if(1 == iNo)
		return 1;
	
	return iNo * Fact(iNo-1);
}
