#include <stdio.h>
#define MAX 50

char* Mystrncat(char *, const char *, int);

int main(void)
{
	char szSrc[MAX];
	char szDest[MAX];
	int iNo;
	
	printf("\nEnter Destination String : ");									//Enter Destination String : Hello
	gets(szDest);
	
	printf("\nEnter Source String : ");											//Enter Source String :  James Bye
	gets(szSrc);
	
	printf("\nEnter Value Of 'n' : ");											//Enter Value Of 'n' : 6
	scanf("%d",&iNo);
	
	printf("\nDestination String is : %s\n",Mystrncat(szDest,szSrc,iNo));		//Destination String is : Hello James
	
	return 0;
}

char * Mystrncat(char *pszDest, const char *pszSrc, int iNo)
{
	unsigned short int ushiCounter1 = 0;
	unsigned short int ushiCounter2 = 0;
	
	while(pszDest[ushiCounter1] != '\0')
		ushiCounter1++;
	
	while(pszSrc[ushiCounter2] != '\0' && ushiCounter2 < iNo)
	{
		pszDest[ushiCounter1] = pszSrc[ushiCounter2];
		ushiCounter1++;
		ushiCounter2++;
	}
	
	pszDest[ushiCounter1] = '\0';
	
	return pszDest;
}
