#include <stdio.h>

int main(void)
{
	int iCounter;
	
	for(iCounter = 0; iCounter < 128; iCounter++)
		printf("\nAmerican Standardization Code For Information Interchange of %d is : %c",iCounter,iCounter); //ASCII Table
	
	return 0;
}
