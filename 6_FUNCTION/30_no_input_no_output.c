#include <stdio.h>

void Addition(void);

int main(void)
{
	Addition();
	
	return 0;
}

void Addition(void)
{
	int iNo1;
	int iNo2;
	int iAns;
	
	printf("\nEnter Two Numbers :\t");		//20 40
	scanf("%d%d",&iNo1,&iNo2);				
	
	iAns = iNo1 + iNo2;
	
	printf("\nAddition is : %d\n",iAns);	//60
}
