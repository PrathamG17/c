#include <stdio.h>

void PrintNo(int,int);

int main(void)
{
	int iNo;
	
	printf("\nEnter Number :\t");		//5
	scanf("%d",&iNo);
	
	PrintNo(1,iNo);

	return 0;
}

void PrintNo(int iNo1,int iTarget)
{
	printf("\n%d",iNo1);				//1 2 3 4 5
	
	if(iTarget == iNo1)
		return;
	
	iNo1++;
	
	PrintNo(iNo1,iTarget);
}
