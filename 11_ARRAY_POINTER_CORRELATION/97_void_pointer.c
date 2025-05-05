#include <stdio.h>
 
int main(void)
{
	int iNo = 10;
	void *vpPtr = &iNo;

	printf("\niNo = %d\n",iNo);							//10		(iNo = 10)

	printf("\n&iNo = %d\n",&iNo);						//100		(&iNo = 5240700)

	printf("\nvpPtr = %d\n",vpPtr);						//100		(vpPtr = 5240700)

	printf("\n&vpPtr = %d\n",&vpPtr);					//200		(&vpPtr = 5240696)

	//printf("\n*vpPtr = %d\n",*vpPtr);					//(16) : error C2100: illegal indirection

	printf("\n*(int *)vpPtr = %d\n",*(int *)vpPtr);		//10		(*(int *)vpPtr = 10)

	return 0;
}
