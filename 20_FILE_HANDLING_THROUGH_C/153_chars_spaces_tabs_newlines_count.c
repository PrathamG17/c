#include <stdio.h>

int main(void)
{
	char chChar;
	int iTabs = 0;
	FILE *fp = NULL;
	int iSpaces = 0;
	int iNewLines = 0;
	int iCharacter = 0;
	
	fp = fopen("153_chars_spaces_tabs_newlines_count.txt", "r");
	if(NULL == fp)
	{
		printf("\nCan't Open File.");
		return -1;
	}
	
	while(1)
	{
		if(EOF == (chChar = fgetc(fp)))
			break;
		
		++iCharacter;
		
		if(' ' == chChar)
			++iSpaces;
		
		if('\t' == chChar)
			++iTabs;
		
		if('\n' == chChar)
			++iNewLines;
	}
	
	if(fp != NULL)
	{
		fclose(fp);
		fp = NULL;
	}
	
	printf("\nTotal No. of Characters : %d", iCharacter);		//Total No. of Characters : 47
	printf("\nTotal No. of Spaces : %d", iSpaces);				//Total No. of Spaces : 4
	printf("\nTotal No. of Tabs : %d", iTabs);					//Total No. of Tabs : 1
	printf("\nTotal No. of Lines : %d", iNewLines);				//Total No. of Lines : 2
	
	return 0;
}
