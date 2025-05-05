#include <stdio.h>
#define MAX 25

char* Mystrcpy(char *,const char *);

int main(void)
{
	char szSrc[MAX];
	char szDest[MAX];
	
	printf("\nEnter Source String : ");										//Enter Source String : Hello
	gets(szSrc);
	
	printf("\nSource String is : %s\n",szSrc);								//Source String is : Hello
	
	printf("\nDestination string is : %s\n",Mystrcpy(szDest,szSrc));		//Destination string is : Hello
	
	return 0;
}

char* Mystrcpy(char *pszDest, const char *pszSrc)
{
	unsigned short int ushiCounter = 0;
	
	while(pszSrc[ushiCounter] != '\0')
	{
		pszDest[ushiCounter] = pszSrc[ushiCounter];
		ushiCounter++;
	}
	
	pszDest[ushiCounter] = '\0';
	
	return pszDest;
}
