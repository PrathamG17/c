#include <stdio.h>

void Fun2(void);

int g_iNo = 10;

void Fun1(void)
{
	printf("\nIn Fun1() , g_iNo = %d\n",g_iNo);
	
	Fun2();
}
