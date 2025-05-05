#include <stdio.h>

struct demo
{
	char chChar;
	int iNo;
	double dNo;
}dObj;
/*  
	ABOVE:- same structure but changed sequence declaration results into 24 bits of wastage from 88 bits (i.e. padding bytes/ 
			Holes) ...Hence structure sequence matters..
*/
int main(void)
{
	printf("\nSize of dObj => %d\n",sizeof(dObj));	//Size of dObj => 16
	
	return 0;
}
