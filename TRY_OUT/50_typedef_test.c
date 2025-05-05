#include <stdio.h>


int main(void)
{
	typedef static unsigned short int i;  //error: multiple storage classes in declaration of `i'
	/*
		ABOVE(6):- Compiler treated typedef as a storage class .. 
	*/	
	return 0;
}
