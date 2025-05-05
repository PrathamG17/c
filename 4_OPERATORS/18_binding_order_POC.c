#include <stdio.h>

int main(void)
{
	int iNo1 = 0;
	int iNo2 = 1;
	int iNo3 = 2;
	int iAns;
	
	iAns = ++iNo1 || ++iNo2 && ++iNo3;
	
	/* iAns = ((++iNo1) || ((++iNo2) && (++iNo3))) */
	
	printf("\niNo1 = %d\niNo2 = %d\niNo3 = %d\niAns = %d\n",iNo1,iNo2,iNo3,iAns);		//1  1  2  1
	
	return 0;
}