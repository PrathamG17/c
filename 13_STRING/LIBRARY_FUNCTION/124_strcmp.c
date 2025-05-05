#include <stdio.h>
#include <string.h>
#define MAX 25

int main(void)
{
	char szStr1[MAX];
	char szStr2[MAX];
	short int shiRet;
	
	printf("\nEnter String 1 : ");						//Enter String 1 : HELLO
	gets(szStr1);
	
	printf("\nEnter String 2 : ");						//Enter String 2 : Hello
	gets(szStr2);
	
	shiRet = strcmp(szStr1,szStr2);
	
	if(shiRet == 0)
		printf("\nStrings Are Equal\n");				
	else
		printf("\nBoth Strings Are Not Equal\n");		//Both Strings Are Not Equal
	
	return 0;
}
