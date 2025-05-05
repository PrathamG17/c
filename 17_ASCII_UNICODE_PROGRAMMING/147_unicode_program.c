#include <stdio.h>
#include <wchar.h>

int main(void)
{
	wchar_t wchChar = 'A';
	wchar_t wszStr[] = L"Hello";
	wchar_t *pwszStr = L"Hello";
	
	printf("\nsizeof wchChar : %d\n",sizeof wchChar);		//sizeof wchChar : 2
	printf("\nsizeof wszStr : %d\n",sizeof wszStr);			//sizeof wszStr : 12
	printf("\nsizeof pwszStr : %d\n",sizeof pwszStr);		//sizeof pwszStr : 4
	printf("\nstrlen(wszStr) : %d\n",strlen(wszStr));		//strlen(wszStr) : 1
	printf("\nwcslen(wszStr) : %d\n",wcslen(wszStr));		//wcslen(wszStr) : 5
	
	return 0;
}
