#include <stdio.h>
#define MAX 25

int Mystrncmp(const char *, const char *, int);

int main(void)
{
	char szStr1[MAX];
	char szStr2[MAX];
	short int shiRet;
	int iNo;
	
	printf("\nEnter String 1 : ");					//Enter String 1 : HELLO
	gets(szStr1);
	
	printf("\nEnter String 2 : ");					//Enter String 2 : Hello
	gets(szStr2);

	printf("\nEnter Value Of 'n' : ");				//Enter Value Of 'n' : 1
	scanf("%d",&iNo);
	
	shiRet = Mystrncmp(szStr1, szStr2, iNo);
	
	if(0 == shiRet)
		printf("\nBoth Strings Are Equal\n");		//Both Strings Are Equal
	else
		printf("\nBoth Strings Are Not Equal\n");
	
	return 0;
}

int Mystrncmp(const char *pszStr1, const char *pszStr2, int iNo)
{
	unsigned short int ushiCounter = 0;
	
	while((pszStr1[ushiCounter] != '\0' && pszStr2[ushiCounter] != '\0') && (ushiCounter < iNo))
	{
		if(pszStr1[ushiCounter] != pszStr2[ushiCounter])
			return (pszStr1[ushiCounter] - pszStr2[ushiCounter]);
		
		ushiCounter++;

	}
	
	return (pszStr1[ushiCounter - 1] - pszStr2[ushiCounter - 1]);
}
