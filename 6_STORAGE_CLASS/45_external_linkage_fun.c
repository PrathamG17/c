#include <stdio.h>

int g_iNo = 10;			//i.e. external linkage				

void Fun(void)
{
 printf("\nIn Fun(),g_iNo = %d\n",g_iNo);		//10
}
