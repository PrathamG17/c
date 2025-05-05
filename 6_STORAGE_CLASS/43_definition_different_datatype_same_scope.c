#include <stdio.h>

int main(void)
{
	int No  = 10;
	float No = 57.33f;					//:6:8: error: conflicting types for 'No'
	
	/* 
		ABOVE(5,6):- Compiler not allowed same identifer name defferent data type definition statement together in same scope 
	*/
	
	printf("\niNo = %d",No);
	
	return 0;
}
