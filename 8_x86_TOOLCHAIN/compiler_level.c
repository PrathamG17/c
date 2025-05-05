#include <stdio.h>

int Addition(int,int);

int main(void)
{
	extern int iNo1;
	extern int iNo2;
	extern int iAns;
	
	printf("\nEnter Two Numbers :\t");		//user msg (inside string hence compiler not touched it):-"\nEnter Two Numbers :\t"
	scanf("%d%d",&iNo1,&iNo2);
	
	iAns = Addition(iNo1,iNo2);
	printf("\nAddition is %d\n",iAns);
	
	return 0;
}

int Addition(int iNo1,int iNo2)
{
	extern int iAns;
	
	iAns = iNo1 + iNo2;
	
	return iAns;
}
