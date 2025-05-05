#include <stdio.h>
#define MAX 25

char* Mystrrev(char *);

int main(void)
{
	char szStr[MAX];
	
	printf("\nEnter String : ");							//Enter String : HELLO
	gets(szStr);
		
	printf("\nReverse String is : %s\n",Mystrrev(szStr));	//Reverse String is : OLLEH
	
	return 0;
}

char* Mystrrev(char *pszStr)
{
	unsigned short int ushiCounter1 = 0;
	unsigned short int ushiCounter2 = 0;
	
	while(pszStr[ushiCounter1] != '\0')
		ushiCounter1++;
	
	ushiCounter1--;
	
	while(ushiCounter1 > ushiCounter2)
	{
		pszStr[ushiCounter2] = pszStr[ushiCounter1] + pszStr[ushiCounter2];
		pszStr[ushiCounter1] = pszStr[ushiCounter2] - pszStr[ushiCounter1];
		pszStr[ushiCounter2] = pszStr[ushiCounter2] - pszStr[ushiCounter1];
		
		ushiCounter1--;
		ushiCounter2++;
	}
	
	return pszStr;
}
