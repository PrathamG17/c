#include <stdio.h>
#include <string.h>
#define MAX 25

int main(void)
{
	char szStr[MAX];
	
	printf("\nEnter String : ");					//Enter String : HELLO
	gets(szStr);
	
	strrev(szStr);
	
	printf("\nReverse String is : %s\n",szStr);		//Reverse String is : OLLEH
	
	return 0;
}
