#include <stdio.h>

int main(void)
{
	char chChar1;
	char chChar2;
	
	printf("\nEnter Character 1 :\t");				//A(press Enter i.e. '\n')
	scanf("%c",&chChar1);
	/*
		ABOVE(9) --> scanf function is buffered function.Who reads the buffer according to mentioned format specifer,(if string
					 i.e. %s then upto white space character caught in buffer.).
				 
				 --> As above read i/p is two characters i.e. 'A' & '\n' present in buffer.Hence as format specifier mentioned
				     i.e. %c it reads 'A' from buffer.(And '\n' remains in the buffer.)
	*/
	printf("\nEnter Character 2 :\t");				//(scanf never stop to read character)
	scanf("%c",&chChar2);
	/*
		ABOVE(18) --> AS 'printf' prints the string on console. 'scanf' reads the single character  form buffer i.e. '\n'
					  (as %c mentioned).(Hence form user's perspective 'scanf' never stops to read his ccharacter because it alreay
					  found one character in the buffer.)
	*/
	printf("\nCharacter 1 is %c\n",chChar1);		//A
	printf("\nCharacter 2 is %c\n",chChar2);		//(print '\n')
	
	return 0;
}
