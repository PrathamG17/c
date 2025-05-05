#include <stdio.h>

void Addition(int,int);

int main(void)
{
	int iNo1;
	int iNo2;
	
	printf("\nEnter Two Numbers :\t");				//20 40
	scanf("%d%d",&iNo1,&iNo2);						
	
	Addition(iNo1, iNo2);

	return 0;
}

void Addition(int iNo1, int iNo2)
{
	int iAns;
	
	iAns = iNo1 + iNo2;
	
	printf("\nAddition is = %d\n",iAns);			//60
}
