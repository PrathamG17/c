#include <stdio.h>
#define MAX 25

char* Mystrnset(char *, char, int);

int main(void)
{
	char chChar;
	char szStr[MAX];
	int iNo;
	
	printf("\nEnter String : ");									//Enter String : hello
	gets(szStr);
	
	printf("\nEnter Character Wanted To Set : ");					//Enter Character Wanted To Set : *
	scanf("%c",&chChar);
	
	printf("\nEnter Value Of 'n' : ");								//Enter Value Of 'n' : 3
	scanf("%d",&iNo);
	
	printf("\nNow String is : %s\n",Mystrnset(szStr,chChar,iNo));	//Now String is : ***lo

	return 0;
}

char* Mystrnset(char *pszStr, char chChar, int iNo)
{
	unsigned short int ushiCounter = 0;
	
	while(pszStr[ushiCounter] != '\0' && ushiCounter < iNo)
	{
		pszStr[ushiCounter] = chChar;
		
		ushiCounter++;
	}
	
	return pszStr;

}
