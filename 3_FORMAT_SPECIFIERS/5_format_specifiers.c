#include <stdio.h>

int main(void)
{
	float fNo = 10.10f;
	double dNo = 11.11;
	
	//Character
	printf("\ncharacter = %c",65.00);						//A

	// integer
	printf("\nsigned integer = %i",10);						//10
	printf("\nsigned integer in decimal = %d",10);			//10
	printf("\nunsigned integer in octal = %o",10);			//12
	printf("\nunsigned integer in decimal = %u",10);		//10
	printf("\nunsigned integer in hexdecimal = %x",10);		//a
	printf("\nunsigned integer in hexdecimal = %X",10);		//A
	printf("\nsigned long = %ld",10);						//10
	printf("\nsigned short = %hd",10);						//10
	printf("\nunsigned long = %lu",10);						//10
	printf("\nunsigned short = %hu",10);					//10

	// float
	printf("\nsigned single precision floating point = %f",fNo);				// 10.100000
	printf("\nsigned single precision float (exponent containing e) = %e",fNo);	// 1.010000e+001
	printf("\nsigned single precision float (exponent containing E) = %E",dNo);	//1.111000E+001
	printf("\nsigned value either in e or f = %g",fNo);							//10.1
	printf("\nsigned value either in E or f = %G",dNo);							//11.11
	printf("\nsigned double precision floating point = %lf",dNo);				//11.110000

	// string
	printf("\nstring = %s","NAMASKAR");											//NAMASKAR

	// address
	printf("\naddress/pointer_content = %p",&dNo);								//012FFDF4
	printf("\nsigned integer in decimal = %d",&dNo);							// 19922420
	printf("\nunsigned integer in hexdecimal = %x",&dNo);						// 12ffdf4
	printf("\nunsigned integer in hexdecimal = %X",&dNo);						// 12FFDF4

	return 0;
}
