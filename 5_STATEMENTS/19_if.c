#include <stdio.h>

int main(void)
{
	int iNo = 5;
	
	if(iNo < 10)
		printf("\n\nOne");	//simple stattement , one
		printf("\nTwo");	//simple statement , Two
	
	iNo = 15;
	if(iNo < 10)
		printf("\nOne");	//simple statement
		printf("\n\nTwo");	//simple statement , Two

	iNo = 5;
	if(iNo < 10)
	{						//compound statement
		printf("\n\nOne");	//One
		printf("\nTwo");	//Two
	}
	
	iNo = 15;
	if(iNo < 10)			//false
	{						//compound statement
		printf("\nOne");	
		printf("\nTwo");	
	}
	
	if(iNo < 10);			//null statement will after if statement
	{						//compound statement
		printf("\n\nOne");	//One
		printf("\nTwo");	//Two
	}

	return 0;
}
