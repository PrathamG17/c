#include <stdio.h>
/* 
	@param iNo1(In Parameter)
	@param iNo2(In Parameter)
	@param pPtr1(Out Parameter)
	@param pPtr2(Out Parameter)
	
*/
void AddSub(int,int,int *,int *);

int main(void)
{
	int iNo1;
	int iNo2;
	int iSum;
	int iDiff;
	
	printf("\nEnter Two Numbers :- \n");		//20		10
	scanf("%d%d",&iNo1,&iNo2);
	
	AddSub(iNo1,iNo2,&iSum,&iDiff);
	
	printf("\nAddition is %d\n",iSum);			//30
	printf("\nSubtraction is %d\n",iDiff);		//10
	
	return 0;
}

void AddSub(int iNo1, int iNo2, int *pPtr1, int *pPtr2)
{
	*pPtr1 = iNo1 + iNo2;
	*pPtr2 = iNo1 - iNo2;
}
