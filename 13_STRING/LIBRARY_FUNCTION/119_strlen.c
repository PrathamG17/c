#include <stdio.h>
#include <string.h>

int main(void)
{
	char szStr[] = "Hello";
	char *pszStr = "Good";
	
	printf("\nThe Length of Hello is %d.\n",strlen(szStr));			//The Length of Hello is 5.
	printf("\nThe Length of Good is %d.\n",strlen(pszStr));			//The Length of Good is 4.
	printf("\nThe Length of Morning is %d.\n",strlen("Morning"));	//The Length of Morning is 7.
	
	return 0;
}
