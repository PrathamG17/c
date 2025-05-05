#include <stdio.h>
#include <stdarg.h>
/*  
	@param : iTotalParams (In Parameter)
*/
int Addition(int, ...);
/*  
	@param : pszFormat (In Parameter)
*/
int Myprintf(const char*, ...);

int main(void)
{
	int iRet;
	
	iRet = Myprintf("\nHello.\n");									//Hello.
	Myprintf("\nReturned %d.\n", iRet);								//Returned 8.
	
	Myprintf("\nInteger : %d.\n", 10);								//Integer : 10.
	Myprintf("\nInteger : %d, Float : %f.\n", 10, 57.33f);			//Integer : 10, Float : 57.330002.
	Myprintf("\nFloat : %f, Integer : %d.\n", 57.33f, 10);			//Float : 57.330002, Integer : 10.
	Myprintf("\nCharacter : %c, Integer : %d, Float : %f, Double : %lf.\n",'A', 10, 57.33f, 69.33);	//Character : A, Integer : 10, Float : 57.330002, Double : 69.330000.
	
	iRet = Addition(2, 10, 20);
	Myprintf("\nAddition is %d.\n", iRet);							//Addition is 30.
	
	iRet = Addition(3, 10, 20, 30);
	Myprintf("\nAddition is %d.\n", iRet);							//Addition is 60.
	
	iRet = Addition(4, 10, 20, 30, 40);
	Myprintf("\nAddition is %d.\n", iRet);							//Addition is 100.
	
	return 0;
}

int Myprintf(const char *pszFormat, ...)
{
	int iRet;
	va_list pPtr = NULL;							//char *
	
	va_start(pPtr, pszFormat);
	/*  
		ABOVE(36) : 'pPtr' will point to memory present after 'pszFormat'
	*/
	iRet = vprintf(pszFormat, pPtr);
	
	va_end(pPtr);									//pPtr = NULL
	
	return iRet;
}

int Addition(int iTotalParams, ...)
{
	int iAns;
	int iCounter;
	va_list pPtr = NULL;
	
	va_start(pPtr, iTotalParams);
	
	iAns = 0;
	for(iCounter = 0; iCounter < iTotalParams; iCounter++)
		iAns = iAns + va_arg(pPtr, int);
	/*  
		ABOVE(57) : 'va_arg' return value printed by 'pPtr' with respect to 'int' & increment pointer i.e. by 'sizeof(int)'
	*/
	va_end(pPtr);
	
	return iAns;
}
