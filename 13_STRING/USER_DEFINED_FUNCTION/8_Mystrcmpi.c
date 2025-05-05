#include <stdio.h>
#define MAX 25

int Mystrcmpi(const char *, const char *);

int main(void)
{
	char szStr1[MAX];
	char szStr2[MAX];
	short int shiRet;
	
	printf("\nEnter String 1 : ");						//Enter String 1 : HELLO
	gets(szStr1);
	
	printf("\nEnter String 2 : ");						//Enter String 2 : hello
	gets(szStr2);
	
	shiRet = Mystrcmpi(szStr1, szStr2);
	
	if(0 == shiRet)
		printf("\nBoth Strings Are Equal\n");			//Both Strings Are Equal
	else
		printf("\nBoth Strings Are Not Equal\n");
	
	return 0;
}

int Mystrcmpi(const char *pszStr1, const char *pszStr2)
{
	unsigned short int ushiCounter = 0;
	
	while(pszStr1[ushiCounter] != '\0' && pszStr2[ushiCounter] != '\0')
	{	
		if((-32 == (pszStr1[ushiCounter] - pszStr2[ushiCounter])) || (32 == (pszStr1[ushiCounter] - pszStr2[ushiCounter])))
		{
			ushiCounter++;
			continue;
		}
		else
			break; 
	}
	
	return (pszStr1[ushiCounter] - pszStr2[ushiCounter]);
}
