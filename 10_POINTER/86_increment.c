#include <stdio.h>

int main(void)
{
	int arr[5] = {10,20,30,40,50};
	int *pPtr = &arr[0];				//arr
	
	printf("\n&pPtr = %d\n",&pPtr);		//200		(&pPtr = 8059260)
	printf("\npPtr = %d\n",pPtr);		//100		(pPtr = 8059264)
	printf("\n*pPtr = %d\n",*pPtr);		//10		(*pPtr = 10)
	
	++pPtr;								//pPtr++
	/*  
		ABOVE(12) :- jevha addition cha konta he ek operand address asto .. tya veli to address jyacha aahe.. tyacha size 
					 ne to('+' operator) second operand nusaar titkya vela to pudhe sarkto ..
				  
				  :- ek ekne swatha(pPtr) pudhe jaat kaam karne..
	*/
	printf("\n&pPtr = %d\n",&pPtr);		//200		(&pPtr = 8059260)
	printf("\npPtr = %d\n",pPtr);		//104		(pPtr = 8059268)
	printf("\n*pPtr = %d\n",*pPtr);		//20		(*pPtr = 20)
	
	return 0;
}
