#include <stdio.h>

void PrintNo(int,int);

int main(void)
{
	int iNo;
	
	printf("\nEnter Number :\t");		//5
	scanf("%d",&iNo);
	
	PrintNo(iNo , 1);

	return 0;
}

void PrintNo(int iNo1,int iTarget)
{
	printf("\n%d",iNo1);				//5 4 3 2 1
	
	if(iTarget == iNo1)
		return;
	
	iNo1--;
	
	PrintNo(iNo1,iTarget);
}
