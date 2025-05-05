#include <stdio.h>

int main(void)
{
	short int iNo = 8;
	
	printf("\niNo = %d\niNo = %u",~iNo,~iNo);
	printf("\nsizeof(iNo) = %d",sizeof(~iNo));
	printf("\nsizeof(short int) = %d",sizeof(short int));
	
	return 0;
}
