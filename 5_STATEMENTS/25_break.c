#include <stdio.h>

int main(void)
{
	unsigned short int ushiCounter;
	
	for(ushiCounter = 1 ; ushiCounter <= 10 ; ushiCounter++)
	{
		if(ushiCounter % 2 == 0)
			break;
		printf("\t%d",ushiCounter);				//1
	}
	
	return 0;
}
