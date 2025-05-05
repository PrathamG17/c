#include <stdio.h>

struct demo
{
	char chChar;
	double dNo;
	int iNo;
}dObj;
/*  
	ABOVE:- sequence of structure member results into 88 bits of wastage(i.e.padding bytes/Holes)...
*/
int main(void)
{
	printf("\nSize of dObj => %d\n",sizeof(dObj));	//Size of dObj => 24
	
	return 0;
}
