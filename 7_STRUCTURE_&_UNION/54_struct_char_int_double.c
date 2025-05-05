#include <stdio.h>

struct demo
{
	char chChar;
	int iNo;
	double dNo;
};

int main(void)
{
	struct demo dObj;
	/*  
		ABOVE(14) :- dObj 
					 storage class:- auto
					 default value:- Garbage
					 scope:- block
					 lietime:-local
					 linkage:- no linkage
	*/

	printf("\nchChar = %c\tiNo = %d\tdNo = %lf\n",dObj.chChar,dObj.iNo,dObj.dNo);	//w   9136779   0.000000
	
	dObj.chChar = 'A';
	printf("\nchChar = %c\tiNo = %d\tdNo = %lf\n",dObj.chChar,dObj.iNo,dObj.dNo);	//A   9136779   0.000000

	dObj.iNo = 10;
	printf("\nchChar = %c\tiNo = %d\tdNo = %lf\n",dObj.chChar,dObj.iNo,dObj.dNo);	//A   10    0.000000

	dObj.dNo = 99.99;
	printf("\nchChar = %c\tiNo = %d\tdNo = %lf\n",dObj.chChar,dObj.iNo,dObj.dNo);	//A   10   99.990000
	/* 
		ABOVE:- In structure all members will get their own memory...
	*/
	return 0;
}
