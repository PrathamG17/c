#include <stdio.h>

extern int No;

int main(void)
{
	extern float No;		//:7:15: error: conflicting types for 'No'
	
	/* 
		ABOVE:- Compiler not allowed same identifier name for different data type declaration statement in differnt
				scope also
	*/
	
	printf("\nNo = %d",No);
	
	return 0;
}
