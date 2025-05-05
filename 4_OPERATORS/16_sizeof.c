#include <stdio.h>

int main(void)
{
	int iNo = 10;
	char chChar = 'A';
	float fNo = 57.33f;
	double dNo = 69.33;
	
	printf("\nsizeof(int) = %d",sizeof(int));			//4
	printf("\nsizeof(char) = %d",sizeof(char));			//1
	printf("\nsizeof(float) = %d",sizeof(float));		//4
	printf("\nsizeof(double) = %d",sizeof(double));		//8
	
	printf("\n\nsizeof(iNo) = %d",sizeof(iNo));			//4
	printf("\nsizeof(chChar) = %d",sizeof(chChar));		//1
	printf("\nsizeof(fNo) = %d",sizeof(fNo));			//4
	printf("\nsizeof(dNo) = %d",sizeof(dNo));			//8

	printf("\n\nsizeof(20) = %d",sizeof(20));			//4
	printf("\nsizeof(B) = %d",sizeof('B'));				//4
	printf("\nsizeof(99.99f) = %d",sizeof(99.99f));		//4
	printf("\nsizeof(99.99) = %d",sizeof(99.99));		//8
	
	printf("\n\nsizeof 20 = %d",sizeof 20);			//4
	printf("\nsizeof iNo = %d",sizeof iNo);			//4
	//printf("\nsizeof int = %d",sizeof int);		// error C2059: syntax error : 'type'
	
	printf("\n\niNo = %d",iNo);						//10
	printf("\nsizeof(++iNo) = %d",sizeof(++iNo));	//4
	printf("\niNo = %d",iNo);						//10 [In above line logical (not physical) solving done only to give output]
	
	//printf("\nsizeof(void) = %d",sizeof(void));		// warning C4034: sizeof returns 0
	
	return 0;
}
