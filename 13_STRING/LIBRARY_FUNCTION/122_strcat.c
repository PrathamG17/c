#include <stdio.h>
#include <string.h>
#define MAX 50

int main(void)
{
	char szSrc[MAX];
	char szDest[MAX];
	
	printf("\nEnter Destination String : ");			//Enter Destination String : Hello
	gets(szDest);
	
	printf("\nEnter Source String : ");					//Enter Source String :  Good Morning
	gets(szSrc);
	
	strcat(szDest, szSrc);
	
	printf("\nDestination String is : %s\n",szDest);	//Destination String is : Hello Good Morning
	
	return 0;
}