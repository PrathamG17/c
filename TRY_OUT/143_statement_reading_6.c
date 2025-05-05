#include <stdio.h>

int *Fun6(void);
int *Fun5(void);
int *Fun4(void);
int *(*Fun3(void))(void);
int *(*Fun2(void))(void);
int *(*Fun1(void))(void);

int main(void)
{
	int iCounter;
	int *pNo = NULL;
	int *(*fpPtr)(void) = NULL;
	int *(*(*arr[3])(void))(void) = {NULL};
	/*  
		ABOVE(15) : 'arr' is array which contain 3 elements each element is of type pointer which store address of function which 
					accepts nothing and returns address of function which accepts nothing and returns address of integer.
	*/
	
	arr[0] = Fun1;
	arr[1] = Fun2;
	arr[2] = Fun3;
	
	for(iCounter = 0; iCounter < 3; iCounter++)
	{
		fpPtr = arr[iCounter]();
		pNo = fpPtr();
		printf("\n\t\t-->iNo = %d\n",*pNo);
	}
	
	return 0;
}

int *(*Fun1(void))(void)
{
	int *(*pPtr)(void) = NULL;
	
	pPtr = Fun4;
	
	printf("\n\t-->In Fun1:\n");
	
	return pPtr;
}

int *(*Fun2(void))(void)
{
	int *(*pPtr)(void) = NULL;
	
	pPtr = Fun5;
	
	printf("\n\t-->In Fun2:\n");
	
	return pPtr;
}

int *(*Fun3(void))(void)
{
	int *(*pPtr)(void) = NULL;
	
	pPtr = Fun6;
	
	printf("\n\t-->In Fun3:\n");
	
	return pPtr;
}

int *Fun4(void)
{
	static int iNo = 10;
	
	printf("\n\t\tIn Fun4:\n");
	
	return &iNo;
}

int *Fun5(void)
{
	static int iNo = 20;
	
	printf("\n\t\tIn Fun5:\n");
	
	return &iNo;
}

int *Fun6(void)
{
	static int iNo = 30;
	
	printf("\n\t\tIn Fun6:\n");
	
	return &iNo;
}
/*  
	O/P: 
        -->In Fun1:

                In Fun4:

                -->iNo = 10

        -->In Fun2:

                In Fun5:

                -->iNo = 20

        -->In Fun3:

                In Fun6:

                -->iNo = 30
*/
