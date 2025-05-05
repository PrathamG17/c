#include <stdio.h>
#include <malloc.h>

int* (*Fun5(void))[4];
int* (*Fun4(void))[4];
int* (*Fun3(void))[4];
/*  
	@param : pParam In Parameter
*/
void Fun2(int* (*(*(*)[3])(void))[4]);
/*  
	@param : pParam In Parameter
*/
void Fun1(int* (*(*(*)[3])(void))[4]);

int main(void)
{
	int iCounter;
	int* (*(*arr2[3])(void))[4] = {NULL};
	void (*arr1[2])(int *(*(*(*)[3])(void))[4]) = {NULL};
	void (*(*pPtr)[2])(int *(*(*(*)[3])(void))[4]) = NULL;
	/*  
		ABOVE : 'pPtr' is pointer which store address of array, which contain 2 elements, each element is of type pointer which 
				store address of function, which accepts address of array which contain 3 elements each element is of type 
				pointer which store address of function, which accepts nothing and return address of array which contain 4 
				elements each is of type pointer ,which store address of integer, and the whole function return nothing.
	*/
	
	pPtr = &arr1;
	
	arr1[0] = Fun1;
	arr1[1] = Fun2;
	
	arr2[0] = Fun3;
	arr2[1] = Fun4;
	arr2[2] = Fun5;
	
	for(iCounter = 0; iCounter < 2; iCounter++)
		(*pPtr)[iCounter](&arr2);
	
	return 0;
}
void Fun1(int* (*(*(*pParam)[3])(void))[4])
{
	int iCounter1;
	int iCounter2;
	int* (*pPtr)[4] = NULL;
	
	printf("\n\t-->In Fun1:\n");
	
	for(iCounter1 = 0; iCounter1 < 3; iCounter1++)
	{
		pPtr = (*pParam)[iCounter1]();
		
		for(iCounter2 = 0; iCounter2 < 4; iCounter2++)
		{
			printf("\n\t-->*((*pPtr)[%d]) = %d\n",iCounter2,*((*pPtr)[iCounter2]));
		}
	}
}

void Fun2(int* (*(*(*pParam)[3])(void))[4])
{
	int iCounter1;
	int iCounter2;
	int* (*pPtr)[4] = NULL;
	
	printf("\n\n\t-->In Fun2:\n");

	for(iCounter1 = 0; iCounter1 < 3; iCounter1++)
	{
		pPtr = (*pParam)[iCounter1]();
		
		for(iCounter2 = 0; iCounter2 < 4; iCounter2++)
		{
			printf("\n\t-->*((*pPtr)[%d]) = %d\n",iCounter2,*((*pPtr)[iCounter2]));
		}
	}	
}

int* (*Fun3(void))[4]
{
	int iCounter;
	static int (*arr[4]) = {NULL};
	
	printf("\n\t\t-->In Fun3:\n");

	for(iCounter = 0; iCounter < 4; iCounter++)
	{
		arr[iCounter] =(int *)malloc(4*sizeof(int));
		*(arr[iCounter]) = rand()%10;
	}
	
	return &arr;
}

int* (*Fun4(void))[4]
{
	int iCounter;
	static int (*arr[4]) = {NULL};
	
	printf("\n\t\t-->In Fun4:\n");

	for(iCounter = 0; iCounter < 4; iCounter++)
	{
		arr[iCounter] =(int *)malloc(4*sizeof(int));
		*(arr[iCounter]) = rand()%10;
	}
	
	return &arr;
}

int* (*Fun5(void))[4]
{
	int iCounter;
	static int (*arr[4]) = {NULL};
	
	printf("\n\t\t-->In Fun5:\n");

	for(iCounter = 0; iCounter < 4; iCounter++)
	{
		arr[iCounter] =(int *)malloc(4*sizeof(int));
		*(arr[iCounter]) = rand()%10;
	}
	
	return &arr;
}
/*  
	o/p:
	
        -->In Fun1:

                -->In Fun3:

        -->*((*pPtr)[0]) = 1

        -->*((*pPtr)[1]) = 7

        -->*((*pPtr)[2]) = 4

        -->*((*pPtr)[3]) = 0

                -->In Fun4:

        -->*((*pPtr)[0]) = 9

        -->*((*pPtr)[1]) = 4

        -->*((*pPtr)[2]) = 8

        -->*((*pPtr)[3]) = 8

                -->In Fun5:

        -->*((*pPtr)[0]) = 2

        -->*((*pPtr)[1]) = 4

        -->*((*pPtr)[2]) = 5

        -->*((*pPtr)[3]) = 5

        
		-->In Fun2:

                -->In Fun3:

        -->*((*pPtr)[0]) = 1

        -->*((*pPtr)[1]) = 7

        -->*((*pPtr)[2]) = 1

        -->*((*pPtr)[3]) = 1

                -->In Fun4:

        -->*((*pPtr)[0]) = 5

        -->*((*pPtr)[1]) = 2

        -->*((*pPtr)[2]) = 7

        -->*((*pPtr)[3]) = 6

                -->In Fun5:

        -->*((*pPtr)[0]) = 1

        -->*((*pPtr)[1]) = 4

        -->*((*pPtr)[2]) = 2

        -->*((*pPtr)[3]) = 3
*/
