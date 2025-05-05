#include <stdio.h>
#include <tchar.h>
#define UNICODE

int main(void)
{
	TCHAR chChar = 'A';
	TCHAR szStr[] = _TEXT("Hello");
	TCHAR *pszStr = _T("Hello");
	
	printf("\nsizeof chChar : %d\n",sizeof chChar);		//sizeof chchar : 1
	printf("\nsizeof szStr : %d\n",sizeof szStr);		//sizeof szStr : 6
	printf("\nsizeof pszStr : %d\n",sizeof pszStr);		//sizeof pszStr : 4
	printf("\n_tcslen(szStr) : %d\n",_tcslen(szStr));	//_tcslen(szStr) : 5
	
	getch();
	
	return 0;
}
