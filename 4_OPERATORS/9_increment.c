#include <stdio.h>

int main(void)
{
	int iAns;
	int iNo = 10;

	printf("\niNo = %d",iNo);			//10
	
	iAns = ++iNo;						
	printf("\niAns = %d",iAns);			//11
	printf("\niNo = %d",iNo);			//11
	
	iAns = iNo++;	
	printf("\niAns = %d",iAns);			//11
	printf("\niNo = %d",iNo);			//12
	
	++iNo;
	printf("\niNo = %d",iNo);			//13
	
	iNo++;
	printf("\niNo = %d",iNo);			//14
	
	printf("\niNo++ = %d",iNo++);		//14
	printf("\niNo = %d",iNo);			//15
	
	printf("\n++iNo = %d",++iNo);		//16
	printf("\niNo = %d",iNo);			//16
	
	printf("\niNo + 1 = %d",iNo + 1);	//17
	printf("\niNo = %d",iNo);			//16
	
	printf("\n+ +iNo = %d",+ +iNo);		//16
	printf("\niNo = %d",iNo);			//16
	
	return 0;
}
