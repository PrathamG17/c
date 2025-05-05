#include <stdio.h>
#include <string.h>
#define MAX 25

int main(void)
{
	char szSrc[MAX];
	char szDest[MAX];
	
	printf("\nEnter Source String : ");						//Enter Source String : Hello
	gets(szSrc);
	
	printf("\nSource String is : %s\n",szSrc);				//Source String is : Hello
	
	strcpy(szDest,szSrc);
	printf("\nDestination string is : %s\n",szDest);		//Destination string is : Hello
	
	return 0;
}
