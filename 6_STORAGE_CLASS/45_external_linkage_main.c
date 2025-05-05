#include <stdio.h>

void Fun(void);

int main(void)
{
	extern int g_iNo;								//declaration statement	
	
	/* 
		ABOVE:- iNo navacha integer variable aahe..tyas..ithe memory deu nako..to externally define kelay(within file or outside
				file) jithe define kelay..tithe tyacha storage class extern asun..linkage external aahe..
	*/
	
	printf("\nIn main(),g_iNo = %d\n",g_iNo);		//10
	
	Fun();
	
	return 0;
}
