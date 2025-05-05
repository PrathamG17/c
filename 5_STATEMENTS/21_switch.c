#include <stdio.h>

int main(void)
{
	switch(2)
	{
		case 1 :
			printf("\nOne");
		case 2 :
			printf("\n\nTwo");	//Two
		case 3 :
			printf("\nThree");	//Three
	}

	switch(3)
	{
		case 1 :
			printf("\nOne");
		case 2 :
			printf("\nTwo");
		case 3 :
			printf("\n\nThree");	//Three
	}
	
	switch(5)
	{
		case 1 :
			printf("\nOne");
		case 2 :
			printf("\nTwo");
		case 3 :
			printf("\nThree");
		default :
			printf("\n\ndefault");	//default
	}

	switch(5)
	{
		case 1 :
			printf("\nOne");
		default :
			printf("\n\ndefault");	//default
		case 2 :
			printf("\nTwo");		//Two
		case 3 :
			printf("\nThree");		//Three
	}

	switch(5)
	{
		case 1 :
			printf("\nOne");
		case 2 :
			printf("\nTwo");
		case 3 :
			printf("\nThree");
	}

	return 0;
}
