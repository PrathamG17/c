#include <stdio.h>

int main(void)
{
	char szStr[] = "Hello";
	char *pszStr = "Good";
	/*
		ABOVE(5) : here string has been stored in array itself. And possible locations for array storage[at run time] are 
				   stack,Non-BSS,BSS which allow to do changes in their memory.
				   
		ABOVE(6) : here "string which are assigned to pointer" are stored in 'rodata region' i.e. read only. Hence can't change. 
	*/
	printf("%s",szStr);								//Hello
	printf("%s",pszStr);							//Good
	printf("%s","Night");							//Night
	
	//or
	
	printf("\n%s%s%s",szStr,pszStr,"Night");		//HelloGoodNight
	
	return 0;
}
