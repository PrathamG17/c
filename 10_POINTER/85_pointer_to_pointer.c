#include <stdio.h>

int main(void)
{
	int iNo = 10;
	int *p = &iNo;
	int **q = &p;
	int ***r = &q;
	int ****s = &r;
	int *****x = &s;
	int ******y = &x;
	int *******z = &y;
	
	printf("\nq = %d\n",q);						//200		(16382656)
	
	printf("\n*q = %d\n",*q);					//100		(16382644)
	
	printf("\n**q = %d\n",**q);					//10		(10)
	
	printf("\n**y = %d\n",**y);					//400		(16382628)
	
	printf("\n****z = %d\n",****z);				//300		(16382636)
	
	//printf("\n*****s = %d\n",*****s);			//(19) : error C2100: illegal indirection
	
	printf("\n&(**x) = %d\n",&(**x));			//400		(16382628)
	
	printf("\n&(***s) = %d\n",&(***s));			//200		(16382656)
	
	printf("\n*(&(***s)) = %d\n",*(&(***s)));	//100		(16382644)
	
	printf("\np = %d\n",p);						//100		(16382644)
	
	printf("\n*p = %d\n",*p);					//10		(10)
	
	printf("\n&(*p) = %d\n",&(*p));				//100		(16382644)
	
	printf("\n*(&(*p)) = %d\n",*(&(*p)));		//10		(10)
	
	printf("\n&iNo = %d\n",&iNo);				//100		(16382644)
	
	printf("\n*(&iNo) = %d\n",*(&iNo));			//10		(10)

	return 0;
}

/*  
	ABOVE :- '*' ha operator address laa apply hoto...(naa ki fakt pointer) 
*/
