#include <stdio.h>

int main(void)
{
	extern int No;
	extern float No;		//:6:15: error: conflicting types for 'No'
	
	/* 
		ABOVE(5,6):- Compiler not allowed same identifier name for different data type declaration statement in same scope
	*/
	
	printf("\nNo = %d",No);
	
	return 0;
}
