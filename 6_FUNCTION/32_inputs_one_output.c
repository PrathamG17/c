#include <stdio.h>

int Addition(int,int);

int main(void)
{
	int iNo1;
	int iNo2;
	int iAns;
	
	printf("\nEnter Two Numbers :\t");			//20  40
	scanf("%d%d",&iNo1,&iNo2);					
	
	iAns = Addition(iNo1,iNo2);
	printf("\nAddition is = %d\n",iAns);		//60

	return 0;
}

int Addition(int iNo1, int iNo2)
{
	int iAns;
	
	iAns = iNo1 + iNo2;
	
	return iAns;
}
