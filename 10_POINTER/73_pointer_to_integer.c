#include <stdio.h>

int main(void)
{
	int iNo = 10;
	int *pPtr = &iNo;
	/*  
		ABOVE(6) :- '*' as datatype
	*/
	printf("\niNo = %d\n",iNo);			//10
	printf("\n&iNo = %d\n",&iNo);		//100	(20315032)
	printf("\npPtr = %d\n",pPtr);		//100	(20315032)
	printf("\n&pPtr = %d\n",&pPtr);		//200	(20315028)	 
	/*  
		ABOVE(O/P of 9 & 11) :- Toolchain --> higher address to lower address...so iNo gets higher address 20315032 & pPtr
								gets lower address i.e. 20315028
 	*/
	printf("\n*pPtr = %d\n",*pPtr);		//10
	
	*pPtr = 20;
	/*  
		ABOVE(20) :- '*' as dereference operator
	*/	

	printf("\n*pPtr = %d\n",*pPtr);		//20

	return 0;
}
