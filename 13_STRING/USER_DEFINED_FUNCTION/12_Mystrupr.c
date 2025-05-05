#include <stdio.h>
#define MAX 25

char* Mystrupr(char *);

int main(void)
{
	char szStr[MAX];
	
	printf("\nEnter String : ");								//Enter String : hello
	gets(szStr);
	
	printf("\nString In Upper Case : %s\n",Mystrupr(szStr));	//String In Upper Case : HELLO
	
	return 0;
}

char* Mystrupr(char *pszStr)
{
	unsigned short int ushiCounter = 0;
	
	while(pszStr[ushiCounter] != '\0')
	{
		if(pszStr[ushiCounter] >= 97 && pszStr[ushiCounter] <= 122)
			pszStr[ushiCounter] = pszStr[ushiCounter] - 32;
		
		ushiCounter++;
	}
	
	return pszStr;
}
