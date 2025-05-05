#include <stdio.h>

int main(void)
{
	int arr[5] = {10, 20, 30, 40, 50};
	int *pPtr1 = &arr[0];								//arr
	int *pPtr2 = &arr[4];
	
	printf("\npPtr1 = %d\n",pPtr1);						//100
	printf("\npPtr2 = %d\n",pPtr2);						//116
	printf("\npPtr1 + pPtr2 = %d\n",pPtr1 + pPtr2);		//(11) : error C2110: '+' : cannot add two pointers
	
	return 0;
}
