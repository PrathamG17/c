#include <stdio.h>
#include <string.h>
#define MAX 25

int main(void)
{
	char szStr1[MAX];
	char szStr2[MAX];
	short int shiRet;
	unsigned short int ushiNo;
	
	printf("\nEnter String 1 : ");					//Enter String 1 : HELLO
	gets(szStr1);
	
	printf("\nEnter String 2 : ");					//Enter String 2 : Hello
	gets(szStr2);

	printf("\nEnter Value Of 'n' : ");				//Enter Value Of 'n' : 1
	scanf("%d",&ushiNo);
	
	shiRet = strncmp(szStr1, szStr2, ushiNo);
	
	if(0 == shiRet)
		printf("\nBoth Strings Are Equal\n");		//Both Strings Are Equal
	else
		printf("\nBoth Strings Are Not Equal\n");
	
	return 0;
}
