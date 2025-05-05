#include <stdio.h>

//@Param : ppPtr (In-Out Parameter.)
void Fun(int **);

int main(void)
{
	int *pPtr = NULL;
	
	Fun(&pPtr);
	
	printf("\n*pPtr = %d\n",*pPtr);		//Dangling Reference		(*pPtr = 10)
	
	return 0;
}

void Fun(int **ppPtr)
{
	int iNo = 10;
	
	*ppPtr = &iNo;
	
	printf("\nppPtr = %d\n",ppPtr);		//100		(ppPtr = 13630720)
	printf("\n*ppPtr = %d\n",*ppPtr);	//300		(*ppPtr = 13630704)
	printf("\n**ppPtr = %d\n",**ppPtr);	//10		(**ppPtr = 10)
}
