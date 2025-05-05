#include <stdio.h>

int main(void)
{
	int iAns;
	int iNo = 10;
	
	printf("\niNo = %d",iNo);		//10
	
	iAns = iNo--;
	printf("\niAns = %d",iAns);		//10
	printf("\niNo = %d",iNo);		//9
	
	iAns = --iNo;
	printf("\niAns = %d",iAns);		//8
	printf("\niNo = %d",iNo);		//8

	printf("\n--iNo = %d",--iNo);	//7
	printf("\niNo = %d",iNo);		//7
	
	printf("\niNo-- = %d",iNo--);	//7
	printf("\niNo = %d",iNo);		//6
	
	printf("\niNo - 1 = %d",iNo - 1);	//5
	printf("iNo = %d",iNo);				//6
	
	return 0;
}