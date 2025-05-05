#include <stdio.h>
#include <string.h>
#define MAX 25

int main(void)
{
	char szStr1[MAX];
	char szStr2[MAX];
	short int shiRet;
	unsigned short int ushiNo;
	
	printf("\nEnter String 1 : ");
	gets(szStr1);
	
	printf("\nEnter String 2 : ");
	gets(szStr2);
	
	printf("\nEnter Value Of 'n' : ");
	scanf("%d",&ushiNo);
	
	shiRet = strncmpi(szStr1, szStr2,ushiNo);
	
	if(0 == shiRet)
		printf("\nBoth Strings Are Equal.\n");
	else
		printf("\nBoth Strings Are Not Equal.\n");
	
	return 0;
}
