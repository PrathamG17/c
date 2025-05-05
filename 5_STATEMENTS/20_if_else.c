#include <stdio.h>

int main(void)
{
	short int shiNo = 5;
	
	if(shiNo < 10)
		printf("\n\nOne");		//simple statement , One
	else
		printf("\nTwo");

	shiNo = 15;
	if(shiNo < 10)
		printf("\nOne");		//simple statement
	else
		printf("\n\nTwo");		//simple statement , Two

	shiNo = 5;
	if(shiNo < 10)
		printf("\n\nOne");		//simple statement
		//printf("\nTwo");		//simple statement
	else 						// error C2181: illegal else without matching if
		printf("\nThree");		//simple statement
	
	shiNo = 15;
	if(shiNo < 10)
	{							//compound statement
		printf("\nOne");
		printf("\nTwo");
	}
	else 
		printf("\n\nThree");	//simple statement , Three
	
	if(shiNo < 10);
/* 	{							//compound statement
		printf("\nOne");
		printf("\nTwo");
	}
 */	else 						// error C2181: illegal else without matching if
		printf("\n\nThree");	//simple statement , Three
	
	return 0;
}
