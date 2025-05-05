#include <stdio.h>
#include <string.h>

int main(void)
{
	char szStr[50];
	FILE *fp = NULL;

	fp = fopen("156_keyboard_to_file.txt", "w");
	if(NULL == fp)
	{
		printf("\nCan't Open File");
		return -1;
	}
	
	printf("\nEnter String : ");		//Enter String : File Handling Through C Programming Language
	
	while(strlen(gets(szStr)) > 0)
	{
		fputs(szStr, fp);
		fputs("\n", fp);
	}
	
	if(fp != NULL)
	{
		fclose(fp);
		fp = NULL;
	}
	
	return 0;
}
