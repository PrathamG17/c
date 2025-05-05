 #include <stdio.h>

int main(void)
{
	int arr[5] = {10, 20, 30, 40, 50};
	int *pPtr1 = &arr[0];								//arr
	int *pPtr2 = &arr[4];
	
	printf("\npPtr1 = %d\n",pPtr1);						//100		(pPtr1 = 9436600)
	printf("\npPtr2 = %d\n",pPtr2);						//116		(pPtr2 = 9436616)

	printf("\npPtr1 - pPtr2 = %d\n",pPtr1 - pPtr2);		//-4		(pPtr1 - pPtr2 = -4)
	printf("\npPtr2 - pPtr1 = %d\n",pPtr2 - pPtr1);		//4			(pPtr2 - pPtr1 = 4)
	/*  
		ABOVE(12,13) :- don addresses madhe kiti elements aahet he represent karel..ani depending on higher and lower addresses
						yenari value he positive kiva nigative asel... (simple math)
	*/
	return 0;
}
