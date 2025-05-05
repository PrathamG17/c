 #include <stdio.h>

int main(void)
{
	char chChar1;
	char chChar2;
	
	printf("\nEnter Character 1 :\t");				//Enter Character 1 :     A(press Enter i.e. '\n')
	scanf("%c",&chChar1);

	printf("\nEnter Character 2 :\t");				//Enter Character 2 :     B(press Enter i.e. '\n')
	
	fflush(stdin);									//'flushall()' clear all 3 buffer.
	
	scanf("%c",&chChar2);							//as scanf reads 'B' and '\n' remains in buffer as it is.

	printf("\nCharacter 1 is %c\n",chChar1);		//Character 1 is A
	printf("\nCharacter 2 is %c\n",chChar2);		//Character 2 is B
		
	return 0;
}
