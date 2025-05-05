#include <stdio.h>
#include <string.h>
#define MAX 25

int main(void)
{
	char szStr[MAX];
	
	printf("\nEnter String : ");						//Enter String : hello
	gets(szStr);
	
	strupr(szStr);
	
	printf("\nString In Upper Case : %s\n",szStr);		//String In Upper Case : HELLO
	
	return 0;
}
