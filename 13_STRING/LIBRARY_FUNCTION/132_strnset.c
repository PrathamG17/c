#include <stdio.h>
#include <string.h>
#define MAX 25

int main(void)
{
	char chChar;
	char szStr[MAX];
	unsigned short int ushiNo;
	
	printf("\nEnter String : ");						//Enter String : Raigad
	gets(szStr);
	
	printf("\nEnter Character Wanted To Set : ");		//Enter Character Wanted To Set : *
	scanf("%c",&chChar);
	
	printf("\nEnter Value Of 'n' : ");					//Enter Value Of 'n' : 5
	scanf("%d",&ushiNo);
	
	strnset(szStr,chChar,ushiNo);
	
	printf("\nNow String is : %s\n",szStr);				//Now String is : *****d

	return 0;
}
