#include <stdio.h>

int main(void)
{
	char szStr[] = "Hello";
	char *pszStr = "Good";
	
	puts(szStr);		//Hello
	puts(pszStr);		//Good
	puts("Night");		//Night
	// 'puts' gives output and appends newline at the end. Hence next output is on newline.

	return 0;
}
