#include <stdio.h>

int main(void)
{
	char chChar1;
	char chChar2;
	char chTemp;
	
	printf("\nEnter Character 1 :\t");				//Enter Character 1 :     A(press Enter i.e. '\n')
	scanf("%c",&chChar1);

	printf("\nEnter Character 2 :\t");				//Enter Character 2 :     B(press Enter i.e. '\n')
		
	scanf("%c%c",&chTemp,&chChar2);
	/*
		ABOVE(14) : as '\n'(comes with 'A') is reads by %c and stored in chTemp. and 'B' read by %c and stored in chChar2. 
					& '\n' remains as it is in buffer.
	*/
	printf("\nCharacter 1 is %c\n",chChar1);		//Character 1 is A
	printf("\nCharacter 2 is %c\n",chChar2);		//Character 2 is B
		
	return 0;
}
