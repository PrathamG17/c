#include <stdio.h>

union demo
{
	char chChar;
	int iNo;
	double dNo;
};

int main(void)
{
	union demo dObj;
	/*  
		ABOVE(14) :- dObj 
					 storage class:- auto
					 default value:- Garbage
					 scope:- block
					 lietime:-local
					 linkage:- no linkage
	*/
	
	printf("\nchChar = %c\tiNo = %d\tdNo = %lf\n",dObj.chChar,dObj.iNo,dObj.dNo);	//@   11612992  0.000000
	
	dObj.chChar = 'A';
	printf("\nchChar = %c\tiNo = %d\tdNo = %lf\n",dObj.chChar,dObj.iNo,dObj.dNo);	//A    11612993    0.000000

	dObj.iNo = 10;
	printf("\nchChar = %c\tiNo = %d\tdNo = %lf\n",dObj.chChar,dObj.iNo,dObj.dNo);	//chChar =
																					//		  iNo = 10        dNo = 0.000000

	dObj.dNo = 99.99;
	printf("\nchChar = %c\tiNo = %d\tdNo = %lf\n",dObj.chChar,dObj.iNo,dObj.dNo);	//Å   687194767   99.990000
	/* 
	ABOVE:- In union all members will share memory reserved by union object (i.e. largest member size reserved memory)...
			In above case it is 8 byte (i.e. sizeof(union dObj) => 8)
			According to respective members characteristics it will share that reserved 64 bits... of dObj
	*/

	return 0;
}
