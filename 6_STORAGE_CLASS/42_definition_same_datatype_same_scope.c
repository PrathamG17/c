#include <stdio.h>

int main(void)
{
	int iNo = 10;
	int iNo = 20;					//:6:6: error: redefinition of 'iNo'
	
	/* 
		ABOVE(5,6):- Compiler not allowed more than one same definition statement in same scope
	*/
	
	printf("\niNo = %d",iNo);
	
	return 0;
}
