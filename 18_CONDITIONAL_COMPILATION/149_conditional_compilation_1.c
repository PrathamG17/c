#include <stdio.h>
#define MYSWITCH

#ifdef MYSWITCH
	int Addition(int, int);
#else
	int Addition(int, int, int);
#endif

int main(void)
{
	int iAns;
	
	#ifdef MYSWITCH
		iAns = Addition(10, 20);
	#else
		iAns = Addition(10, 20, 30);
	#endif

	printf("\nAddition is %d\n",iAns);		//Addition is 30
	
	return 0;
}

#ifdef MYSWITCH
int Addition(int iParam1, int iParam2)
{
	return iParam1 + iParam2;
}
#else
int Addition(int iParam1, int iParam2, int iParam3)
{
	return iParam1 + iParam2 + iParam3;
}
#endif
