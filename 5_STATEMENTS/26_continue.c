#include <stdio.h>

int main(void)
{
	unsigned short int u16iCounter;
	
	for(u16iCounter = 1 ; u16iCounter <= 10 ; u16iCounter++)
	{
		if(u16iCounter % 2 == 0)
			continue;
		printf("\t%d",u16iCounter);					//1	 3  5  7  9
	}
	
	return 0;
}
