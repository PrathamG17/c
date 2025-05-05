#include <stdio.h>
#include <string.h>
#define MAX 25

int main(void)
{
	char szStr[MAX];
	
	printf("\nEnter String : ");						//Enter String : HEllO
	gets(szStr);
	
	strlwr(szStr);
	
	printf("\nString in lower case is : %s\n",szStr);	//String in lower case is : hello
	
	return 0;
}
