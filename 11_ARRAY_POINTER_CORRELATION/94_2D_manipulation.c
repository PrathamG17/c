#include <stdio.h>

int main(void)
{
	int arr[3][4] = {10,20,30,40,50,60,70,80,90};
	
	printf("\n&arr = %d\n",&arr);							//100 [100-148]		(&arr = 11533484)
	//&(2D naav) => 2D address
	
	printf("\narr = %d\n",arr);								//100 [100-116]		(arr = 11533484)
	//2D naav => 1D address

	printf("\narr[0] = %d\n",arr[0]);						//100 [100-104]		(arr[0] = 11533484)
	//2D->0th 1D naav(element address)

	printf("\narr[0][0] = %d\n",arr[0][0]);					//10				(arr[0][0] = 10)
	//2D->0th 1D->0th element naav(value)

	printf("\n&arr + 1 = %d\n",&arr + 1);					//148				(&arr + 1 = 11533532)
	//2D size ne pudhe

	printf("\narr + 1 = %d\n",arr + 1);						//116				(arr + 1 = 11533500)
	//1D size ne pudhe
	
	printf("\narr[0] + 1 = %d\n",arr[0] + 1);				//104				(arr[0] + 1 = 11533488)
	//element size ne pudhe
	
	printf("\narr[0][0] + 1 = %d\n",arr[0][0] + 1);			//11				(arr[0][0] + 1 = 11)
	//value + 1
	
	printf("\n*arr = %d\n",*arr);							//100 [100-104]		(*arr = 11533484)
	//*(2D naav) => 1D naav(element address)
	
	printf("\n**arr = %d\n",**arr);							//10				(**arr = 10)
	//*(2D naav) => *(1D naav) => element naav(value)
	
	printf("\n*arr + 1 = %d\n",*arr + 1);					//104				(*arr + 1 = 11533488)
	//element size ne pudhe
	
	printf("\n**arr + 1 = %d\n",**arr + 1);					//11				(**arr + 1 = 11)
	//value + 1
	
	printf("\narr + 2 = %d\n",arr + 2);						//132				(arr + 2 = 11533516)
	//1D size ne pudhe (2 vela)
	
	printf("\n*(arr + 2) = %d\n",*(arr + 2));				//132 [132-136]		(*(arr + 2) = 11533516)
	//*(2D level address) => 1D naav(element address)
	
	printf("\n*(arr + 2) + 3 = %d\n",*(arr + 2) + 3);		//144				(*(arr + 2) + 3 = 11533528)
	//element size ne pudhe (3 vela)
	
	printf("\n*(*(arr + 2) + 3) = %d\n",*(*(arr + 2) + 3));	//0					(*(*(arr + 2) + 3) = 0)
	//*(1D level addree) => element naav(value)
	
	return 0;
}
