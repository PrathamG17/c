#include <stdio.h>
#define MAX 25

char* Mystrset(char *, char);

int main(void)
{
	char szStr[MAX];
	char chChar;
	
	printf("\nEnter String : ");								//Enter String : hello
	gets(szStr);
	
	printf("\nEnter The Character Wanted To Set : ");			//Enter The Character Wanted To Set : *
	scanf("%c",&chChar);
	
	printf("\nNow String is : %s\n",Mystrset(szStr,chChar));	//Now String is : *****
	
	return 0;
}

char* Mystrset(char *pszStr, char chChar)
{
	unsigned short int ushiCounter = 0;
	
	while(pszStr[ushiCounter] != '\0')
	{
		pszStr[ushiCounter] = chChar;
		
		ushiCounter++;
	}
	
	return pszStr;
}
