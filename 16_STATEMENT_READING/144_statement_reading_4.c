#include <stdio.h>

void Fun5(void);
void Fun4(void);
/*  
	@param : pParam In Parameter.
*/
void** Fun1(void(*(*)[2])(void));
/*  
	@param : pParam In Parameter.
*/
void** Fun2(void(*(*)[2])(void));
/*  
	@param : pParam In Parameter.
*/
void** Fun3(void(*(*)[2])(void));

int main(void)
{
	int iCounter;
	void **vppPtr = NULL;
	void(*arr1[])(void) = {Fun4, Fun5};
	void **(*arr2[3])(void(*(*)[2])(void)) = {NULL};
	void **((*(*pPtr)[3])(void (*(*)[2])(void))) = NULL;
	/*  
		ABOVE : 'pPtr' is pointer which store address of 'array' which contain 3 elements, where each element is of type 
				'pointer' which store address of 'function' which accepts address of 'array' in which each element is of 
				type 'pointer' which store address of 'function' which accepts nothing and returns nothing , and the whole 
				function return address of pointer	which store address of any data type [i.e. address of void pointer]
	*/
	
	arr2[0] = Fun1;
	arr2[1] = Fun2;
	arr2[2] = Fun3;
		
	pPtr = &arr2;
	
	for(iCounter = 0; iCounter < 3; iCounter++)
	{
		vppPtr = (*pPtr)[iCounter](&arr1);
		
		printf("\n\t-->**(int **)vppPtr = %d\n",**(int **)vppPtr);
	}
	
	return 0;
}

void** Fun1(void(*(*pParam)[2])(void))
{
	int iCounter;
	static int iNo = 10;
	static void *vpPtr = NULL;
	
	printf("\n\t-->In Fun1:\n");
	vpPtr = &iNo;
	
	for(iCounter = 0; iCounter < 2; iCounter++)
		(*pParam)[iCounter]();
	
	return &vpPtr;
}

void** Fun2(void(*(*pParam)[2])(void))
{
	int iCounter;
	static int iNo = 20;	
	static void *vpPtr = NULL;
	
	printf("\n\t-->In Fun2:\n");
	vpPtr = &iNo;

	for(iCounter = 0; iCounter < 2; iCounter++)
		(*pParam)[iCounter]();
	
	return &vpPtr;
}

void** Fun3(void(*(*pParam)[2])(void))
{
	int iCounter;
	static int iNo = 30;	
	static void *vpPtr = NULL;
	
	printf("\n\t-->In Fun3:\n");
	vpPtr = &iNo;
	
	for(iCounter = 0; iCounter < 2; iCounter++)
		(*pParam)[iCounter]();

	return &vpPtr;
}

void Fun4(void)
{
	printf("\n\t\t-->In Fun4:\n");
}

void Fun5(void)
{
	printf("\n\t\t-->In Fun5:\n");
}
/*  
	o/p:
	
        -->In Fun1:

                -->In Fun4:

                -->In Fun5:

        -->**(int **)vppPtr = 10

        -->In Fun2:

                -->In Fun4:

                -->In Fun5:

        -->**(int **)vppPtr = 20

        -->In Fun3:

                -->In Fun4:

                -->In Fun5:

        -->**(int **)vppPtr = 30
*/
