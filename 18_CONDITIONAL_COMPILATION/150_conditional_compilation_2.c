#include <stdio.h>
#define MYSWITCH 100

#if MYSWITCH == 2
	int Addition(int, int);
#elif MYSWITCH == 3
	int Addition(int, int, int);
#else
	int Addition(int, int, int, int);
#endif

int main(void)
{
	int iAns;
	
	#if MYSWITCH == 2
		iAns = Addition(10, 20);
	#elif MYSWITCH == 3
		iAns = Addition(10, 20, 30);
	#else
		iAns = Addition(10, 20, 30, 40);
	#endif
	
	printf("\nAddition is %d\n",iAns);		//Addition is 100
	
	return 0;
}

#if MYSWITCH == 2
int Addition(int iParam1, int iParam2)
{
	return iParam1 + iParam2;
}
#elif MYSWITCH == 3
int Addition(int iParam1, int iParam2, int iParam3)
{
	return iParam1 + iParam2 + iParam3;
}
#else
int Addition(int iParam1, int iParam2, int iParam3, int iParam4)
{
	return iParam1 + iParam2 + iParam3 + iParam4;
}
#endif
