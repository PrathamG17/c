#include <stdio.h>

int main(void)
{
	char chChar;
	FILE *fp = NULL;
	
	fp = fopen("152_print_characters.txt", "r");
	if(NULL == fp)
	{
		printf("\nCan't Open File");
		return -1;
	}
	
	while(1)
	{
		if(EOF == (chChar = fgetc(fp)))
			break;
		
		printf("%c", chChar);				//File Handling Through C Programming Language.
	}
	
	if(fp != NULL)
	{
		fclose(fp);
		fp = NULL;
	}
	
	return 0;
}
