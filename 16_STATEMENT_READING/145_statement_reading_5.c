#include <stdio.h>

/*
	@param : pParam1 In Parameter.
	@param : ppParam2 In-Out Parameter.
*/
int** Fun2(int *, int **);
/*
	@param : pParam1 In Parameter.
	@param : fpParam2 In Parameter.
*/
void** Fun1(int *, int **(*)(int *, int **));

int main(void)
{
	int iNo = 10;
	void **vppPtr = NULL;
	int **(*fpPtr2)(int *, int **) = NULL;
	void **(*fpPtr1)(int *,int **(*)(int *, int **)) = NULL;
	/*  
		ABOVE(19) : 'fpPtr1' is pointer which store address of 'Function' which accepts 2 parameters, first accepts address of 
				'integer' second accepts address of 'Function' which accepts 2 parameters first accepts address of 'integer' 
				and second accepts address of address of 'pointer' which store address of integer,and that function return 
				address of 'pointer' which store address of 'integer', & the whole function return address of 'pointer' which 
				store address of any datatype (i.e. address of void pointer).
	*/
	
	fpPtr1 = Fun1;
	fpPtr2 = Fun2;
	
	vppPtr = fpPtr1(&iNo, fpPtr2);
	
	printf("\n-->Explicit Returned Value is %d\n",***(int ***)vppPtr);		//22
	printf("\n-->Parametrised Returned Value is %d\n",iNo);					//22
	
	return 0;
}

void** Fun1(int *pParam1, int **(*fpParam2)(int *, int **))
{
	static void *vpPtr = NULL;
	
	printf("\n\t-->In Fun1\n");
	
	printf("\n\t-->Received Value is %d\n",*pParam1);							//10
	
	vpPtr = fpParam2(pParam1,&pParam1);
	
	return &vpPtr;
}

int** Fun2(int *pParam1, int **ppParam2)
{
	static int *pPtr = NULL;
	
	printf("\n\t\t-->In Fun2\n");

	**ppParam2 = *pParam1 + (++**ppParam2);									//**ppParam2 = 11(2nd) + 11(1st);
	
	pPtr = *ppParam2;
	
	return &pPtr;
}
/*
	o/p:
        -->In Fun1

        -->Received Value is 10

                -->In Fun2

	-->Explicit Returned Value is 22

	-->Parametrised Returned Value is 22
*/
