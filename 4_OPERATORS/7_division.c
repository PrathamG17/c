#include <stdio.h>

int main(void)
{
	printf("\n%d/%d = %d",9,2,9/2);		//9/2 = 4
	printf("\n%d/%d = %d",9,-2,9/-2);	//9/-2 = -4
	printf("\n%d/%d = %d",-9,2,-9/2);	//-9/2 = -4
	printf("\n%d/%d = %d",-9,-2,-9/-2);	//-9/-2 = 4
	
	return 0;
}
