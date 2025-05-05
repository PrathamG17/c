#include "1_Calculation.h"
#include <stdio.h>

int main(void)
{
	int iNo1;
	int iNo2;
	int iAns;
	
	printf("\nEnter Two Numbers :\t");
	scanf("%d%d",&iNo1,&iNo2);
	
	iAns = Addition(iNo1,iNo2);
	printf("\nAddition Is = %d.\n",iAns);
	
	Subtraction(iNo1,iNo2);
	
	iAns = Multiplication();
	printf("\nMultiplication Is = %d.\n",iAns);
	
	Division();
	
	printf("\nFor Modulus Operation...\nEnter Numerator :\t");
	scanf("%d",&iNo1);
	printf("\nEnter Denominator :\t");
	scanf("%d",&iNo2);
	
	iAns = Modulus(iNo1,iNo2);
	printf("\nRemainder Is : \t %d.\n",iAns);
	
	return 0;
}
