#include <stdio.h>

int main(void)
{
	int iAns1, iAns2;		// ',' as separator
	
	iAns1 = 10,20,30;		//Operator
	
	iAns2 = (10,20,30);		//Operator
	
	printf("\niAns1 = %d\niAns2 = %d\n",iAns1,iAns2);	//separator
	
	return -1, 1, 0;		//operator
}
