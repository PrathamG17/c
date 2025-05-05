#include <stdio.h>
#include <string.h>
#define MAX 50

int main(void)
{
	char szSrc[MAX];
	char szDest[MAX];
	unsigned short int ushiNo;
	
	printf("\nEnter Destination String : ");				//Enter Destination String : Hello
	gets(szDest);
	
	printf("\nEnter Source String : ");						//Enter Source String :  James Bye
	gets(szSrc);
	
	printf("\nEnter Value Of 'n' : ");						//Enter Value Of 'n' : 6
	scanf("%d",&ushiNo);
	
	strncat(szDest,szSrc,ushiNo);
	
	printf("\nDestination String is : %s\n",szDest);		//Destination String is : Hello James
	
	return 0;
}
