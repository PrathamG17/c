#include <stdio.h>

int g_iNo = 10;			//i.e. external linkage				

void Fun1(void)
{
	printf("\nIn Fun1(), g_iNo = %d\n",g_iNo);		//10
	
	Fun2();
}
