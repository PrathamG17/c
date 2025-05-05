#include <stdio.h>

int main(void)
{
	char szStr[] = "Hello";
	char *pszStr = "Good";
	char szText[50];
	
	sprintf(szText,"%s%s%s",szStr,pszStr,"Night");
	/*
		ABOVE(9) : print stirng [szStr,pszStr,"Night"] in ["%s%s%s"] format in string [i.e. 'szText'].
				   -->'s' in sprintf for print in string.
	*/
	printf(szText);			//HelloGoodNight
	
	return 0;
}
