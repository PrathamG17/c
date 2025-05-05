#include <stdio.h>

int main(void)
{
	char chChar = 'A';
	char arr[] = {'A','B','C'};
	char szStr[] = "Hello";
	char *pszStr = "Hello";
	
	printf("\nsizeof chchar : %d\n",sizeof chChar);		//sizeof chchar : 1
	printf("\nsizeof szStr : %d\n",sizeof szStr);		//sizeof szStr : 6
	printf("\nsizeof pszStr : %d\n",sizeof pszStr);		//sizeof pszStr : 4
	printf("\nstrlen(szStr) : %d\n",strlen(szStr));		//strlen(szStr) : 5
	
	return 0;
}
