#include <stdio.h>

int main(void)
{
	int iAns;
	
	iAns = 3.25 * 2 + ( 5 / 2 );
	
	printf("iAns = %d\n",iAns);			//8
	
	return 0;
}

/* solving -->  iAns = 3.25 * 2 + ( 5 / 2 );
				iAns = ((3.25 * 2.0) + 2 );		//promotion of 2 to 2.0
				iAns = (6.5 + 2.0)				//promotion of 2 to 2.0
				iAns = 8.5						//demotion of 8.5 to 8 				
*/