#include <stdio.h>

void Fun1(void);

int main(void)
{
	extern int g_iNo;
	
	printf("\nIn main() , g_iNo = %d\n",g_iNo);
	
	Fun1();
	
	return 0;
}

static int g_iNo = 20;

void Fun2(void)
{
	printf("\nIn Fun2() , g_iNo = %d\n",g_iNo);
}
