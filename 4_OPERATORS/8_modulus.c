#include <stdio.h>

int main(void)
{
	printf("\n%d%%d = %d",9,2,9%2);			//9%d = 2-----("%%" => % )
	printf("\n%d%%%d = %d",9,2,9%2);		//9%2 = 1	
	printf("\n%d%%%d = %d",9,-2,9%-2);		//9%-2 = 1
	printf("\n%d%%%d = %d",-9,2,-9%2);		//-9%2 = -1
	printf("\n%d%%%d = %d",-9,-2,-9%-2);	//-9%-2 = -1
	
	return 0;
}
