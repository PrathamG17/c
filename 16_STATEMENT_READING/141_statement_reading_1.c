#include <stdio.h>

int Fun2(void);
/*  
	@param : iParam1 In Parameter.
	@param ; fpParam2 In Parameter.
*/
void* Fun1(int, int (*)(void));

int main(void)
{
	void *vpPtr = NULL;
	int (*fpPtr2)(void) = NULL;
	void* (*fpPtr1)(int, int (*)(void)) = NULL;
	/*
		ABOVE : 'pPtr' is pointer, which store address of function which accepts 2 parametrs, first accepts integer, 
				second accepts address of function, which accepts nothing and return integer, and the whole function 
				return address of any datatype (i.e address of void).
	*/
	
	fpPtr1 = Fun1;
	fpPtr2 = Fun2;
	
	vpPtr = fpPtr1(rand()%10,fpPtr2);
	
	printf("\n\t-->Explicit returned value is %d\n",*(int *)vpPtr);
	
	return 0;
}

void* Fun1(int iParam1, int (*fpParam2)(void))
{
	static int iRet;
	
	printf("\n\t\t-->In Fun1:\n");
	
	printf("\n\t\t-->Received Value is %d\n",iParam1);
	
	iRet = fpParam2();

	iRet = iRet + iParam1;
	
	return &iRet;
}

int Fun2(void)
{
	printf("\n\t\t\t-->In Fun2:\n");
	
	return rand()%10;
}
/*  
	o/p:
				-->In Fun1:

                -->Received Value is 1

                        -->In Fun2:

        -->Explicit returned value is 8
*/