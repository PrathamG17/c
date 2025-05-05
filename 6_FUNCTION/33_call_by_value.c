#include <stdio.h>

void Fun(int);

int main(void)
{
	int iNo = 10;
	
	printf("\nBefore calling iNo is %d\n",iNo);			//10
	
	Fun(iNo);
	/*  
		ABOVE(11):- call results into Push of stack frame of Fun() Function which has its own container(i.e. reserved 
					memory of 4 bytes). In call by value only values passed by caller is stored in callie's formal parameters..
					(i.e. callie's container of 4 byte iNo) and all operations done on callie's reserved memory...
	*/
	
	printf("\nAfter calling iNo is %d\n",iNo);			//10 (changes doesn't reflect)
	
	return 0;
}

void Fun(int iNo)
{
	printf("\nIn Fun, iNo is %d\n",iNo);				//10
	
	++iNo;
	
	printf("\nLeaving Fun, iNo is %d\n",iNo);			//11
}
