#include <stdio.h>

int main(void)
{
	int iCount;
	
	iCount = printf("\"\nNamaskar !!\nPrathamesh.\"");
	printf("\n \"printf()\" returns = %d ",iCount);

	return 0;
}
	/* printf() function prototype :- 
						
	-->   int printf(const char*, ...);
	--> i.e. it returns number of character present in string.
	*/