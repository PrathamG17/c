#include <stdio.h>
#include "1_calculation.h"		//current directory

int main(void)
{
	int iNo1;
	int iNo2;
	int iAns;
	
	printf("\nEnter Two Numbers:\n");				// 10  20
	scanf("%d%d",&iNo1,&iNo2);						
	
	iAns = Addition(iNo1 , iNo2);				
	printf("\nAddition is %d.\n",iAns);				//30
	
	Subtraction(iNo1 , iNo2);
	
	iAns = Multiplication();						
	printf("\nMultiplication is %d.\n",iAns);		//200
	
	Division();
	
	printf("\nFor Modulus,\n");
	printf("\nEnter Numerator = \t");				//30
	scanf("%d",&iNo1);								
	printf("\nEnter Denominator = \t");				//4
	scanf("%d",&iNo2);								
	
	iAns = Modulus(iNo1 , iNo2);					
	printf("\nRemainder is %d.\n",iAns);			//2
	
	return 0;
}

int Multiplication(void)
{
	int iNo1;
	int iNo2;
	int iAns;
	
	printf("\nFor Multiplication,\n");				//10  20
	scanf("%d%d",&iNo1,&iNo2);						
	
	iAns = iNo1 * iNo2;								//200
	
	return iAns;
}

int Addition(int iNo1 , int iNo2)
{
	return iNo1 + iNo2;								//30
}

int Modulus(int iNo1 , int iNo2)
{
	return iNo1 % iNo2;								//2
}

void Division(void)
{
	int iNo1;
	int iNo2;
	int iAns;
	
	printf("\nFor Division,\n");
	printf("\nEnter Numerator = \t");				//30
	scanf("%d",&iNo1);								
	printf("\nEnter Denominator = \t");				//6
	scanf("%d",&iNo2);								
	
	iAns = iNo1 / iNo2;
	printf("\nQuotient is %d.\n",iAns);				//5
}

void Subtraction(int iNo1 ,int iNo2)
{
	printf("\nSubtraction is %d.\n",iNo1 - iNo2);	//-10
}

