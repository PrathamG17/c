#include <stdio.h>
#include <string.h>

int main(void)
{
	char szStr[25];
	FILE *fp = NULL;
	
	fp = fopen("1_hellofseekWorld.txt", "w");
	if(NULL == fp)
	{
		printf("\nCan't Open File");
		return -1;
	}
	
	printf("\nEnter : ");
	while(strlen(gets(szStr)) > 0)
	{
		fputs(szStr, fp);
		fseek(fp, 100, SEEK_END);
	}
	
	if(fp != NULL)
	{
		fclose(fp);
		fp = NULL;
	}
	
	return 0;
}
