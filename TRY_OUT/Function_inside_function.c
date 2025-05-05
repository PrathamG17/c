#include <stdio.h>

void Fun2(void);

int main(void)
{
	void Fun1(void);
	
	Fun1();
		
	Fun2();
	
	return 0;
}

void Fun2(void)
{
	static void Fun1(void)
	{
		printf("\nPrathamesh\n");
	}

	Fun1();
}