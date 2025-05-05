#include <stdio.h>
#include <string.h>
#define MAX 25

int main(void)
{
	char szStr[MAX];
	char chChar;
	
	printf("\nEnter String : ");							//Enter String : HELLO
	gets(szStr);
	
	printf("\nEnter The Character Wanted To Set : ");		//Enter The Character Wanted To Set : *
	scanf("%c",&chChar);
	
	strset(szStr,chChar);
	
	printf("\nNow String is : %s\n",szStr);					//Now String is : *****
	
	return 0;
}
