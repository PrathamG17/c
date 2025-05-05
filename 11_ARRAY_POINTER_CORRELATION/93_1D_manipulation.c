#include <stdio.h>
 
int main(void)
{
	int arr[5] = {10,20,30,40,50};
	
	printf("\n&arr = %d\n",&arr);					//100 [100-120]			(&arr = 3931132)
	//&(1D naav) => 1D address
	
	printf("\narr = %d\n",arr);						//100 [100-104]			(arr = 3931132)
	//1D naav(element address)
	
	printf("\narr[0] = %d\n",arr[0]);				//10					(arr[0] = 10)
	//1D->0th element naav(value)
	
	printf("\n&arr[0] = %d\n",&arr[0]);				//100 [100-104]			(&arr[0] = 3931132)
	//&(1D->0th element naav) =>element address
	
	printf("\n&arr + 1 = %d\n",&arr + 1);			//120					(&arr + 1 = 3931152)
	//1D size ne pudhe 
	
	printf("\narr + 1 = %d\n",arr + 1);				//104					(arr + 1 = 3931136)
	//element size ne pudhe
	
	printf("\narr[0] + 1 = %d\n",arr[0] + 1);		//11					(arr[0] + 1 = 11)
	//value + 1
	
	printf("\n&arr[0] + 1 = %d\n",&arr[0] + 1);		//104					(&arr[0] + 1 = 3931136)
	//element size ne pudhe
	
	printf("\n*arr = %d\n",*arr);					//10					(*arr = 10)
	//*(1D naav) => element naav(value)
	
	printf("\n*arr + 1 = %d\n",*arr + 1);			//11					(*arr + 1 = 11)
	//value + 1
	
	printf("\n*(arr + 1) = %d\n",*(arr + 1));		//20					(*(arr + 1) = 20)
	//*(1D level address) => element naav(value)
	
	 return 0;
}

/*  
	ABOVE : 1) naavala * --> aatlyache ==> naav
			2) aani fakt naav ---> aatlyacha ==> address [Except : element naav ==> element value]
					
			3) address + 3 * sizeof(address's datatype)
			4) [Dereference operator] * 'not only applied on pointer'... it is applied on address
*/
