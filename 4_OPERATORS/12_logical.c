#include <stdio.h>

int main(void)
{
	printf("\n1 && 1 = %d",1 && 1);		//1
	printf("\n1 && 0 = %d",1 && 0);		//0
	
	printf("\n\n1 || 0 = %d",1 || 0);	//1
	printf("\n1 || 1 = %d",1 || 1);		//1
	printf("\n0 || 0 = %d",0 || 0);		//0
	
	printf("\n\n!0 = %d",!0);				//1
	
	printf("\n\n10 && 20 = %d",10 && 20);	//1
	printf("\n10 && -10 = %d",10 && -10);	//1
	
	printf("\n\n10 || 10 = %d",10 || 10);	//1
	printf("\n-10 || 10 = %d",-10 || 10);	//1
	
	printf("\n\n!10 = %d",!10);			//0
	printf("\n!-20 = %d",!-20);			//0
	
	return 0;
}
