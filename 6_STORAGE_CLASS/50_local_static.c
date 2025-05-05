#include <stdio.h>

void Fun1(void);
void Fun2(void);

int main(void)
{
	unsigned short int u16iCounter;
	
	for(u16iCounter = 0; u16iCounter < 3; u16iCounter++)
		Fun1();
	
	printf("\n");
	
	for(u16iCounter = 0; u16iCounter < 3; u16iCounter++)
		Fun2();
	
	return 0;
}

void Fun1(void)
{
	int iNo = 10;
	
	/* ABOVE(23):- auto storage class aslyane..lifetime local aahe,jymule dar veli jvha stack frame navyane yeil..tevha iNo 
				navyane create hoel..with initialisation
	*/
	
	++iNo;
	
	printf("\nauto iNo = %d",iNo);		 //11 	11	 11
}

void Fun2(void)
{
	static int iNo = 10;
	
	/* 
		ABOVE(36):- non executable static definition statement aslyne...iNo process create hotanach ..create hoel..aani process 
				destruction velich marel..irrespective of its function stack frame(Push or Pop).. where it is define by its 
				C programmer ,hence the previous manipulations of varible persist. 
	*/
	
	++iNo;
	
	printf("\nstatic iNo = %d",iNo);	//11 	12 	 13
}
