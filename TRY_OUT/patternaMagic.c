#include <stdio.h>

int main(void)
{
	int n;
	int i;
	int j;
	int mid;
	
	printf("\nEnter No. : ");
	scanf("%d", &n);
	
	for(i = 0; i < n; i++)
	{
		if((i%2 != 0) || ((n-i)%2 == 0))
			continue;
		
		mid = i/2;
		
		for(j = 0; j < mid; j++)
			printf(" ");
			
		for(j = 0; j < (n-i); j++)
			printf("*");
			
		printf("\n");
	}

	for(i = n-2; i >= 0; i--)
	{
		if((i%2 != 0) || ((n-i)%2 == 0))
			continue;
		
		mid = i/2;
		
		for(j = 0; j < mid; j++)
			printf(" ");
			
		for(j = 0; j < (n-i); j++)
			printf("*");
			
		printf("\n");
	}
	
	return 0;
}
