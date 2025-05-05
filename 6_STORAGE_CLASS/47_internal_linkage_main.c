#include <stdio.h>

void Fun(void);

int main(void)
{
	extern int g_iNo;
	
	printf("\nIn main() , g_iNo = %d\n",g_iNo);		//20
	
	Fun();
	
	return 0;
}

int g_iNo = 20;
/*  
	ABOVE(16):- g_iNo
				storage class => extern
				default value => zero
				scope => global
				lifetime => global (till process destruction)
				linkage => external
*/
