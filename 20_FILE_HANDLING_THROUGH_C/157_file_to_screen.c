#include <stdio.h>

int main(void)
{
	FILE *fp = NULL;
	char szStr[50];
	
	fp = fopen("157_file_to_screen.txt", "r");
	if(NULL == fp)
	{
		printf("\nCan't Open File");
		return -1;
	}
	
	while(fgets(szStr, 49, fp) != NULL)
		printf("%s", szStr);						//FILE Handling Through C Programming Language
	
	if(fp != NULL)
	{
		fclose(fp);
		fp = NULL;
	}
	
	return 0;
}
