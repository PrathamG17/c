#include <stdio.h>

/*  
	@param pPtr (In Parameter)
*/
void Fun(int *);

int main(void)
{
	int iNo = 10;
	
	printf("\nBefore Calling iNo is %d\n",iNo);		//10
	
	//call by address...Formal parameter is adddress
	Fun(&iNo);
	
	printf("\nAfter Calling iNo is %d\n",iNo);		//11
	
	return 0;
}

void Fun(int *pPtr)		//actual parameter is pointer ('*')
{
	printf("\nIn Fun() iNo is %d\n",*pPtr);			//10
	
	++*pPtr;
	
	printf("\nLeaving Fun() iNo is %d\n",*pPtr);	//11
}
