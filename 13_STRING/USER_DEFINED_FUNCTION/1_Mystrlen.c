#include <stdio.h>

int Mystrlen(const char *);

int main(void)
{
	char szStr[] = "Hello";
	char *pszStr = "Good";
	
	printf("\nThe Length of Hello is %hu.\n",Mystrlen(szStr));			//The Length of Hello is 5.
	printf("\nThe Length of Good is %hu.\n",Mystrlen(pszStr));			//The Length of Good is 4.
	printf("\nThe Length of Morning is %hu.\n",Mystrlen("Morning"));	//The Length of Morning is 7.
	
	return 0;
}

int Mystrlen(const char *pszStr)
{
	int iIndex = 0;
	
	while(pszStr[iIndex] != '\0')
		++iIndex;
	
	return iIndex;
}
