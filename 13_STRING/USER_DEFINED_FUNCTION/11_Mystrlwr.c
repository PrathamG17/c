#include <stdio.h>
#define MAX 25

char* Mystrlwr(char *);

int main(void)
{
	char szStr[MAX];
	
	printf("\nEnter String : ");								//Enter String : HEllO
	gets(szStr);
	
	printf("\nString In Lower Case Is : %s\n",Mystrlwr(szStr));	//String In Lower Case Is : hello
	
	return 0;
}

char* Mystrlwr(char *pszStr)
{
	unsigned short int ushiCounter = 0;
	
	while(pszStr[ushiCounter] != '\0')
	{
		if(pszStr[ushiCounter] >= 65 && pszStr[ushiCounter] <= 90)
			pszStr[ushiCounter] = pszStr[ushiCounter] + 32;
		
		ushiCounter++;
	}
	
	return pszStr;
}
