#include <stdio.h>
/*  
	@param : iParam1 (In Parameter)
	@param : iParam2 (In Parameter)
*/
int Addition(int, int);
/*  
	@param : iParam1 (In Parameter)
	@param : iParam2 (In Parameter)
*/
int Multiplication(int, int);

int main(void)
{
	int iAns;
	int (*fpPtr)(int, int) = NULL;
	
	fpPtr = Addition;
	iAns = fpPtr(10,20);
	printf("\nAddition is %d\n",iAns);		//30
	
	fpPtr = Multiplication;
	iAns = fpPtr(10,20);
	printf("\nMultiplication is %d\n",iAns);	//200
	
	return 0;
}

int Addition(int iParam1, int iParam2)
{
	int iAns;
	
	iAns = iParam1 + iParam2;
	
	return iAns;
}

int Multiplication(int iParam1, int iParam2)
{
	int iAns;
	
	iAns = iParam1 * iParam2;
	
	return iAns;
}
