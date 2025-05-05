#include <stdio.h>

struct demo
{
	char chChar;
	double dNo;
};

#pragma pack(1)
/*  
	ABOVE(9) :- statement is only effective for the structures declared below it...Hence definition at line 14
				gets memory according its structure dclaration ...& its memory alignment...irrespective of line 9..
*/
struct demo dObj;

int main(void)
{
	printf("\nSize of dObj :- %d\n",sizeof(dObj));		//size of dObj :- 16
	
	return 0;
}
