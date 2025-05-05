#include <stdio.h>

extern int iNo;

int main(void)
{
	extern int iNo;				//compiler allowed more than one same declartion statement..irrespective of scope
		
	printf("\niNo = %d",iNo);	//10
	
	return 0;
}

int iNo = 10;