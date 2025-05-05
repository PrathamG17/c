#include <stdio.h>

int main(void)
{
	int arr[] = {10,20,30,40,50};
	int *ptr[] = {arr, arr + 1, arr + 2, arr + 3, arr + 4};
	int **ppPtr = ptr;
	
	printf("\narr = %d *arr = %d &arr = %d\n",arr, *arr, &arr);		//100 [100-104]  10  100 [100-120]		(arr = 10026464 *arr = 10 &arr = 10026464)
	
	printf("\nptr = %d *ptr = %d **ptr = %d\n",ptr, *ptr, **ptr);	//200 [200-204]  100  10				(ptr = 10026488 *ptr = 10026464 **ptr = 10)
	
	printf("\nppPtr = %d *ppPtr = %d **ppPtr = %d\n",ppPtr, *ppPtr, **ppPtr);	//200  100  10				(ppPtr = 10026488 *ppPtr = 10026464 **ppPtr = 10)
	
	*++ppPtr;
	printf("\nppPtr - ptr = %d *ppPtr - arr = %d **ppPtr = %d\n",ppPtr - ptr, *ppPtr - arr, **ppPtr);	//1  1  20   
	
	*ppPtr++;
	printf("\nppPtr - ptr = %d *ppPtr - arr = %d **ppPtr = %d\n",ppPtr - ptr, *ppPtr - arr, **ppPtr);	//2  2  30	 
	
	++*ppPtr;
	printf("\nppPtr - ptr = %d *ppPtr - arr = %d **ppPtr = %d\n",ppPtr - ptr, *ppPtr - arr, **ppPtr);	//2  3   40 
	/*  
		ABOVE(15,18,21) : Binding order...according to associativity
	*/
	return 0;
}
