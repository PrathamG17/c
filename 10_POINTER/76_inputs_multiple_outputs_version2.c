#include <stdio.h>
/*  
	@param iNo1 (In Parameter)
	@param iNo2 (In Parameter)
	@param pPtr (Out Parameter)
*/
int AddSub(int,int,int *);

int main(void)
{
	int iNo1;
	int iNo2;
	int iSum;
	int iDiff;
	
	printf("\nEnter Two Numbers :- \n");		//20	10
	scanf("%d%d",&iNo1,&iNo2);
	
	iSum = AddSub(iNo1,iNo2,&iDiff);
	
	printf("\nAddition is %d\n",iSum);			//30
	printf("\nSubtraction is %d\n",iDiff);		//10
	
	return 0;
}

int AddSub(int iNo1, int iNo2, int *pPtr)
{
	*pPtr = iNo1 - iNo2;
	
	return iNo1 + iNo2;
}
