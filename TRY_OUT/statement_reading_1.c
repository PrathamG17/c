#include <stdio.h>

void Case8_2(int **pPtr);
void Case8(int *(arr[3]));
void Case8_1(int *(*pPtr)[3]);

int main(void)
{
	int *(arr[3]) = {NULL};
	
	Case8(arr);

	//Case8_1(arr);

	Case8_2(arr);
	
	return 0;
}

void Case8(int *(arr[3]))		// int *(*pPtr)[3]
{
	int iCounter;

	for(iCounter = 0; iCounter < 3; iCounter++)
	{
		arr[iCounter] = (int *)calloc(1 * sizeof(int));
		*arr[iCounter] = rand()%1000;
	}

	for(iCounter = 0; iCounter < 3; iCounter++)
		printf("\n*arr[%d] = %d\n",iCounter,*arr[iCounter]);
}

void Case8_1(int *(*pPtr)[3])
{
	int iCounter;

	for(iCounter = 0; iCounter < 3; iCounter++)
	{
		(*pPtr)[iCounter] = (int *)calloc(1 * sizeof(int));
		*((*pPtr)[iCounter]) = rand()%1000;
	}

	for(iCounter = 0; iCounter < 3; iCounter++)
		printf("\n*arr[%d] = %d\n",iCounter,*((*pPtr)[iCounter]));
}

void Case8_2(int **pPtr)
{
	int iCounter;
	int **pTemp = NULL;
	
	pTemp = pPtr;
	for(iCounter = 0; iCounter < 3; iCounter++)
	{
		*pPtr = (int *)calloc(1 , sizeof(int));
		**pPtr = rand()%10;
		pPtr++;
	}

	pPtr = pTemp;
	for(iCounter = 0; iCounter < 3; iCounter++)
	{
		printf("\n*arr[%d] = %d\n",iCounter,**pPtr);
		pPtr++;
	}
}
