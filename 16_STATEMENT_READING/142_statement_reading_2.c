#include <stdio.h>

int (* Fun3(void))[2];
int (* Fun2(void))[2];
int (* Fun1(void))[2];

int main(void)
{
	int iCounter1;
	int iCounter2;
	int (*pPtr)[2] = NULL;
	int (*(*arr[3])(void))[2] = {NULL};
	/* 
		ABOVE(12) : 'arr' is array which contain 3 elements and each element is of type pointer which store address of Function 
					which accepts nothing and returns address of array which contain 2 elements where each element is of type int.
	*/
	
	arr[0] = Fun1;
	arr[1] = Fun2;
	arr[2] = Fun3;
	
	for(iCounter1 = 0; iCounter1 < 3; iCounter1++)
	{
		pPtr = arr[iCounter1]();
		for(iCounter2 = 0; iCounter2 < 2; iCounter2++)
			printf("\tarr[%d] = %d\t",iCounter2,(*pPtr)[iCounter2]);
	}
	
	return 0;
}
int (* Fun1(void))[2]
{
	static int arr[2] = {10,20};
	
	printf("\n\t-->In Fun1\n");
	
	return &arr;
}

int (* Fun2(void))[2]
{
	static int arr[2] = {30,40};
	
	printf("\n\t-->In Fun2\n");
	
	return &arr;
}

int (* Fun3(void))[2]
{
	static int arr[2] = {50,60};
	
	printf("\n\t-->In Fun3\n");
	
	return &arr;
}
/* 
	o/p:
		-->In Fun1
        arr[0] = 10             arr[1] = 20
        -->In Fun2
        arr[0] = 30             arr[1] = 40
        -->In Fun3
        arr[0] = 50             arr[1] = 60
*/
