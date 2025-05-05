#include <stdio.h>

int Mystrlen(const char *);

int main(void)
{
	char szStr[] = "Hello";
	char *pszStr = "Hello";
	int iLength;
	
	iLength = Mystrlen(szStr);
	printf("\nString Length is %d\n",iLength);		//String Length is 5

	iLength = Mystrlen(pszStr);		
	printf("\nString Length is %d\n",iLength);		//String Length is 5
	
	return 0;
}

int Mystrlen(const char *pszStr)
{
	int iIndex = 0;
	
	while(pszStr[iIndex] != '\0')
		++iIndex;
	
	return iIndex;
}
