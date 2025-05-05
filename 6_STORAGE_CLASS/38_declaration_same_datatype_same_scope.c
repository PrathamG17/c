#include <stdio.h>

int main(void)
{
	extern int iNo;
	extern int iNo;				//compiler allowed more than one same declartion statement..
	
	/* 
		ABOVE:- iNo navacha integer variable aahe..tyas..ithe memory deu nako..to externally define kelay(within file or outside
				file) jithe define kelay..tithe tyacha storage class extern asun..linkage external aahe..
	*/
	
	printf("\niNo = %d",iNo);	//10
	
	return 0;
}

int iNo = 10;					//i.e. default it is [ extern int iNo = 10; ] here extern considered as storage class..
