#include <stdio.h>

static int g_iNo = 10;
/*  
	ABOVE(3):- g_iNo
			   storage class => static
			   default value => zero
			   scope => global
			   lifetime => global (till process destruction)
			   linkage => internal
*/
void Fun(void)
{
	printf("\nIn Fun() , g_iNo = %d\n",g_iNo);	//10
}
