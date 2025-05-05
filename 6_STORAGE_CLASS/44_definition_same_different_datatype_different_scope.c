#include <stdio.h>

void Fun(void);

int No = 10;

int main(void)
{
	int No = 20;													//shadow global No
	
	printf("\nmain Function block scope, No = %d\n",No);			//20
	
	{
		char No = 'A';												//It only shadow block scope No	
		
		printf("\nInner Block Scope, No = %d\n",No);				//65
		
		/* 
			ABOVE(16):- Name Resolution(Conceptual Linking) of line no. 14 definition statement 'No' here..
		*/		
	}
	
	printf("\nmain Function blcok scope, No = %d\n",No);			//20
	
	/* 
		ABOVE(11,23):- Name Resolution(Conceptual Linking) of line no. 9 definition statement 'No' here..
	*/
	
	Fun();
	
	return 0;
}

void Fun(void)
{
	printf("\nGlobal scope, No = %d\n",No);							  //10
	
	/* 
		ABOVE(36):- Name Resolution(Conceptual Linking) of line no. 5 definition statement 'No' here..
	*/
}
