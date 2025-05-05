#include <stdio.h>

int main(void)
{
	char chChar;
	
	printf("\nEnter Character : ");		//o
	scanf("%c",&chChar);				
	
	switch(chChar)
	{
		case 'A' :
		case 'E' :
		case 'I' :
		case 'O' :
		case 'U' :
			printf("\nIt is capital letter vowel.");
			break;

		case 'a' :
		case 'e' :
		case 'i' :
		case 'o' :
		case 'u' :
			printf("\nIt is small letter vowel.");	//It is small letter vowel.
			break;

		default :
			printf("\nIt is not vowel.");
	}
	
	return 0;
}
