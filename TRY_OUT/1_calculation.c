#include <stdio.h>
#include "1_calculation.h"

int main(void)
{
	int iNo1;
	int iNo2;
	int iAns;
	
	printf("\n\t-----ADDITION OPERATION-----\n");
	printf("\n\t\t-->ENTER NUMBER 1 =\t");
	scanf("%d",&iNo1);
	printf("\n\t\t-->ENTER NUMBER 2 =\t");
	scanf("%d",&iNo2);
	
	iAns = Addition(iNo1 , iNo2);									
	printf("\n\t\t-->ADDITION IS %d.\n",iAns);								//30
	
	printf("\n\t-----SUBTRACTION OPERATION-----\n");
	Subtraction(iNo1 , iNo2);
	
	iAns = Multiplication();											
	printf("\n\t\t-->MULTIPLICATION IS %d.\n",iAns);							//200
	
	Division();
	
	printf("\n\t-----MODULUS OPERATION-----\n");
	printf("\n\t\t-->ENTER NUMERATOR =\t");
	scanf("%d",&iNo1);													//30
	printf("\n\t\t-->ENTER DENOMINATOR =\t");
	scanf("%d",&iNo2);													//4
	
	iAns = Modulus(iNo1 , iNo2);											
	printf("\n\t\t-->REMAINDER IS %d.\n",iAns);							//2
	
	return 0;
}

int Addition(int iNo1 , int iNo2)
{
	return iNo1 + iNo2;
}
void Subtraction(int iNo1 , int iNo2)
{
	printf("\n\t\t-->SUBTRACTION IS %d.\n",iNo1 - iNo2);						//-10
}
int Multiplication(void)
{
	int iNo1;
	int iNo2;
	int iAns;
	
	printf("\n\t-----MULTIPLICATION OPERATION------\n");
	printf("\n\t-->ENTER NUMBER 1 =\t");
	scanf("%d",&iNo1);
	printf("\n\t-->ENTER NUMBER 2 =\t");
	scanf("%d",&iNo2);										// 10	20
	
	iAns = iNo1 * iNo2;													//200
	
	return iAns;
}
void Division(void)
{
	int iNumerator;
	int iDenominator;
	int iQuotient;
	
	printf("\n\t-----DIVISION OPERATION-----\n");
	printf("\n\t\t-->ENTER NUMERATOR =\t");
	scanf("%d",&iNumerator);													//30
	printf("\n\t\t-->ENTER DENOMINATOR =\t");
	scanf("%d",&iDenominator);		
	
	iQuotient = iNumerator / iDenominator;								
	printf("\n\t\t-->QUOTIENT IS %d.\n",iQuotient);							//5
}
int Modulus(int iNo1 , int iNo2)
{
	return iNo1 % iNo2;
}
