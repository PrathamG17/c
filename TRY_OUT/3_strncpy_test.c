#include <stdio.h>
#include <string.h>
#define MAX 25

int main(void)
{
	char szSrc[MAX];
	char szDest[MAX];
	unsigned short int ushiNo;
	
	
	printf("\nEnter Source String : ");
	gets(szSrc);
	
	printf("\nEnter Value of 'n' : ");
	scanf("%d",&ushiNo);
	
	printf("\nSource string is : %s\n",szSrc);
	
	strncpy(szDest,szSrc,ushiNo);
	
	printf("\nDestination string is : %s\n",szDest);
	
	getch();
	
	return 0;
}
