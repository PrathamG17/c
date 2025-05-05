#include <stdio.h>

int main(void)
{
	char chChar;
	FILE *fpSourc = NULL;
	FILE *fpDest = NULL;
	
	fpSourc =fopen("154_file_copy_source.txt", "r");
	if(NULL == fpSourc)
	{
		printf("\nCan't Open File");
		return -1;
	}
	
	fpDest =fopen("154_file_copy_dest.txt", "w");
	if(NULL == fpDest)
	{
		fclose(fpSourc);
		fpSourc = NULL;
		
		printf("\nCan't Open File");
		return -1;
	}
	
	while(1)
	{
		if(EOF == (chChar =fgetc(fpSourc)))
			break;
		
		fputc(chChar, fpDest);
	}
	
	if(fpSourc != NULL)
	{
		fclose(fpSourc);
		fpSourc = NULL;
	}
	
	if(fpDest != NULL)
	{
		fclose(fpDest);
		fpDest = NULL;
	}
	
	printf("\nCopied Successfully");		//Copied Successfully
	
	return 0;
}
