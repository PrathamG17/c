#include <stdio.h>
#define MAX 25

int Mystrcmp(const char *, const char *);

int main(void)
{
	char szStr1[MAX];
	char szStr2[MAX];
	short int shiRet;
	
	printf("\nEnter String 1 : ");						//Enter String 1 : HELLO
	gets(szStr1);
	
	printf("\nEnter String 2 : ");						//Enter String 2 : Hello
	gets(szStr2);
	
	shiRet = Mystrcmp(szStr1,szStr2);
	
	if(shiRet == 0)
		printf("\nStrings Are Equal\n");				
	else
		printf("\nBoth Strings Are Not Equal\n");		//Both Strings Are Not Equal
	
	return 0;
}

int Mystrcmp(const char *pszStr1, const char *pszStr2)
{
	unsigned short int ushiCounter = 0;
	
	while(pszStr1[ushiCounter] != '\0' && pszStr2[ushiCounter] != '\0')
	{
		if(pszStr1[ushiCounter] != pszStr2[ushiCounter])
			break;
		
		ushiCounter++;
	}
	
	return (pszStr1[ushiCounter] - pszStr2[ushiCounter]);
}
