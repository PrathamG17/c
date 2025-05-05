#include <stdio.h>

void Case11(char (*arr[3])[2]);

int main(void)
{
	char (*arr[3])[2] = {NULL};
	
	Case11(arr);
	
	return 0;
}

void Case11(char (*arr[3])[2])
{
	int iCounter1;
	int iCounter2;
	int iASCII = 65;
	
	for(iCounter1 = 0; iCounter1 < 3; iCounter1++)
	{
		arr[iCounter1] = (char *)calloc(2, sizeof(char));
		if(NULL == arr[iCounter1])
		{
			printf("\nMemory Allocation Failed\n");
			return;
		}
		
		for(iCounter2 = 0; iCounter2 < 2; iCounter2++)
		{
			((*arr[iCounter1])[iCounter2]) = iASCII++;
		}
	}
	
	for(iCounter1 = 0; iCounter1 < 3; iCounter1++)
	{
		for(iCounter2 = 0; iCounter2 < 2; iCounter2++)
		{
			printf("\n(*arr[%d])[%d] = %c\n",iCounter1, iCounter2, ((*arr[iCounter1])[iCounter2]));
		}
	}
}

void Case11(char (*(*pPtr)[3])[2])
{
	
}
