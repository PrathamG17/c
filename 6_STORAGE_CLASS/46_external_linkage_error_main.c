#include <stdio.h>

void Fun(void);

int main(void)
{
	extern int g_iNo;
	
	printf("\nIn main(),g_iNo = %d",g_iNo);	//20
	
	Fun();
	
	return 0;
}

int g_iNo = 20;								//external linkage