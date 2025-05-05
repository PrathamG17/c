#include <stdio.h>
#define MAX 50

char* Mystrcat(char *, const char *);

int main(void)
{
	char szSrc[MAX];
	char szDest[MAX];
	
	printf("\nEnter Destination String : ");							//Enter Destination String : Hello
	gets(szDest);
	
	printf("\nEnter Source String : ");									//Enter Source String :  Good Morning
	gets(szSrc);
	
	printf("\nDestination String is : %s\n",Mystrcat(szDest, szSrc));	//Destination String is : Hello Good Morning
	
	return 0;
}

char* Mystrcat(char *pszDest, const char *pszSrc)
{
	char *szSrc[MAX];
	char *szDest[MAX];
	unsigned short int ushiCounter1 = 0;
	unsigned short int ushiCounter2 = 0;
	
	while(pszDest[ushiCounter1] != '\0')
		ushiCounter1++;
	
	while(pszSrc[ushiCounter2] != '\0')
	{
		pszDest[ushiCounter1] = pszSrc[ushiCounter2];
		ushiCounter1++;
		ushiCounter2++;
	}
	
	pszDest[ushiCounter1] = '\0';
	
	return pszDest;
}
