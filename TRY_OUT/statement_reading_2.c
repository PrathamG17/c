#include <stdio.h>

void Case10(int (*arr)[3]);

int main(void)
{
	int (*arr)[3] = NULL;
	
	Case10(arr);
	
	return 0;
}

void Case10(int (*arr)[3])
{
	int iCounter;
	
	for(iCounter = 0; iCounter < 3; iCounter++)
	{
		arr = (int *)calloc(3,sizeof(int));
		(*arr)[iCounter] = rand()%100;
	}
	
	for(iCounter = 0; iCounter < 3; iCounter++)
		printf("\narr[%d] = %d\n",iCounter,(*arr)[iCounter]);
	
}
