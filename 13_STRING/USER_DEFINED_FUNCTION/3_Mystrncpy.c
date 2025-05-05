#include <stdio.h>
#define MAX 25

char* Mystrncpy(char *, const char *, int);

int main(void)
{
	char szSrc[MAX];
	char szDest[MAX];
	int iNo;
	
	
	printf("\nEnter Source String : ");
	gets(szSrc);
	
	printf("\nEnter Value of 'n' : ");
	scanf("%d",&iNo);
	
	printf("\nSource string is : %s\n",szSrc);
		
	printf("\nDestination string is : %s\n",Mystrncpy(szDest,szSrc,iNo));
	
	return 0;
}

char* Mystrncpy(char *pszDest, const char *pszSrc, int iNo)
{
	unsigned short int ushiCounter = 0;
	
	while(pszSrc[ushiCounter] != '\0' && ushiCounter < iNo)
	{
		pszDest[ushiCounter] = pszSrc[ushiCounter];
		ushiCounter++;
	}
	
	pszDest[ushiCounter] = '\0';
	
	return pszDest;
}
