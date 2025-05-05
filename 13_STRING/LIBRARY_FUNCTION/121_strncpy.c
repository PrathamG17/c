#include <stdio.h>
#include <string.h>
#define MAX 25

int main(void)
{
	char szSrc[MAX];
	char szDest[MAX];
	unsigned short int ushiNo;
	
	
	printf("\nEnter Source String : ");					//Enter Source String : Hello
	gets(szSrc);
	
	printf("\nEnter Value of 'n' : ");					//Enter Value of 'n' : 2
	scanf("%d",&ushiNo);
	
	printf("\nSource string is : %s\n",szSrc);			//Source string is : Hello
	
	strncpy(szDest,szSrc,ushiNo);
	
	printf("\nDestination string is : %s\n",szDest);	//Destination string is : He
	
	return 0;
}
