#include <stdio.h>
/*  
	@param pPtr1 (In-Out Parameter)
	@param pPtr2 (In-Out Parameter)
*/
void AddSub(int *,int *);

int main(void)
{
	int iNo1;
	int iNo2;
	
	printf("\nEnter Two Numbers :- \n");	//20 	10
	scanf("%d%d",&iNo1,&iNo2);
	
	AddSub(&iNo1,&iNo2);
	
	printf("\nAddition is %d\n",iNo1);		//30
	printf("\nSubtraction is %d\n",iNo2);	//10
	
	return 0;
}

void AddSub(int *pPtr1, int *pPtr2)
{
	int iTemp = *pPtr1;
	
	*pPtr1 = iTemp + *pPtr2;
	
	*pPtr2 = iTemp - *pPtr2;
}
