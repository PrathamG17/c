#include <stdio.h>

int g_iNo = 10;								//error:(.data+0x0): multiple definition of `g_iNo'

void Fun(void)
{
 printf("\nIn Fun(),g_iNo = %d\n",g_iNo);		//10
}
