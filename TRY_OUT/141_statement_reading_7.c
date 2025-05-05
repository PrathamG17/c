#include <stdio.h>

int (*(*Fun(void))[3])(void);
/*  
	ABOVE(3) : 'Fun' is function which acceptes nothing and returns address of array in which each element is of type pointer 
				which store address of function which accepts nothing and return integer.
*/
int Fun1(void);
int Fun2(void);
int Fun3(void);

int main(void)
{
	int iCounter;
	int iTemp;
	
	int (*(*pPtr)[3])(void) = NULL;
	
	pPtr = Fun();
	
	for(iCounter = 0; iCounter < 3; iCounter++)
	{
		iTemp = (*pPtr)[iCounter]();		//function cha address milala mhnje ch function so tithun direct call kar..
		printf("\niNo = %d\n",iTemp);
	}
	
	return 0;
}

int (*(*Fun(void))[3])(void)
{
	static int (*arr[3])(void) = {NULL};
	
	arr[0] = Fun1;
	arr[1] = Fun2;
	arr[2] = Fun3;
	
	return &arr;
}
int Fun1(void)
{
	static int iNo = 10;
	
	printf("\nIn Fun1\n");
	
	return iNo;
}

int Fun2(void)
{
	static int iNo = 20;
	
	printf("\nIn Fun1\n");
	
	return iNo;
}

int Fun3(void)
{
	static int iNo = 30;
	
	printf("\nIn Fun1\n");
	
	return iNo;
}

/* 
	o/p: 

	In Fun1

	iNo = 10

	In Fun1

	iNo = 20

	In Fun1

	iNo = 30
*/
