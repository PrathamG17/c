#include <stdio.h>

int main(void)
{
	int arr[5] = {10,20,30,40,50};
	int *pPtr1 = &arr[0];								//arr
	int *pPtr2 = &arr[4];
	
	printf("\npPtr1 = %d\n",pPtr1);						//100
	printf("\npPtr2 = %d\n",pPtr2);						//116
	
	printf("\npPtr1 * 3 = %d\n",pPtr1 * 3);				//(12) : error C2296: '*' : illegal, left operand has type 'int *'
	printf("\npPtr1 * pPtr2 = %d\n",pPtr1 * pPtr2);		//(13) : error C2296: '*' : illegal, left operand has type 'int *'
														//(13) : error C2297: '*' : illegal, right operand has type 'int *'

	printf("\npPtr1 / 3 = %d\n",pPtr1 / 3);				//(15) : error C2296: '/' : illegal, left operand has type 'int *'
	printf("\npPtr1 / pPtr2 = %d\n",pPtr1 / pPtr2);		//(16) : error C2296: '/' : illegal, left operand has type 'int *'
														//(16) : error C2297: '/' : illegal, right operand has type 'int *'

	printf("\npPtr1 % 3 = %d\n",pPtr1 % 3);				//(18) : error C2296: '%' : illegal, left operand has type 'int *'
	printf("\npPtr1 % pPtr2 = %d\n",pPtr1 % pPtr2);		//(19) : error C2296: '%' : illegal, left operand has type 'int *'
														//(19) : error C2297: '%' : illegal, right operand has type 'int *'
	
	return 0;
}