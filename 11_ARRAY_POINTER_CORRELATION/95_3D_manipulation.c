#include <stdio.h>

int main(void)
{
	int arr[3][2][4] = {10,20,30,40,50,60,70,80,90};
	
	printf("\narr[0] = %d\n",arr[0]);										//100 [100-116]		(arr[0] = 10221760)
	//3D->0th 2D naav(1D address)
	
	printf("\narr[0][0] = %d\n",arr[0][0]);									//100 [100-104]		(arr[0][0] = 10221760)
	//3D->0th 2D->0th 1D naav(element address)
	
	printf("\narr[0][0][0] = %d\n",arr[0][0][0]);							//10				(arr[0][0][0] = 10)
	//3D->0th 2D->0th 1D->0th element naav(value)
	
	printf("\narr[1] = %d\n",arr[1]);										//132 [132-148]		(arr[1] = 10221792)
	//3D->1st 2D naav(1D address)
	
	printf("\narr[1][0] = %d\n",arr[1][0]);									//132 [132-136]		(arr[1][0] = 10221792)
	//3D->1st 2D->0th 1D naav(element address)
	
	printf("\narr[1][0][0] = %d\n",arr[1][0][0]);							//90				(arr[1][0][0] = 90)
	//3D->1st 2D->0th 1D->0th element naav(value)
	
	printf("\narr[2] = %d\n",arr[2]);										//164 [164-180]		(arr[2] = 10221824)
	//3D->2nd 2D naav(1D address)
	
	printf("\narr[2][0] = %d\n",arr[2][0]);									//164 [164-168]		(arr[2][0] = 10221824)
	//3D->2nd 2D->0th 1D naav(element address)
	
	printf("\narr[2][0][0] = %d\n",arr[2][0][0]);							//0					(arr[2][0][0] = 0)
	//3D->2nd 2D->0th 1D->0th element naav(value)

	printf("\narr[0] + 1 = %d\n",arr[0] + 1);								//116				(arr[0] + 1 = 10221776)
	//1D size ne pudhe
	
	printf("\narr[0][0] + 1 = %d\n",arr[0][0] + 1);							//104				(arr[0][0] + 1 = 10221764)
	//element size ne pudhe
	
	printf("\narr[0][0][0] + 1 = %d\n",arr[0][0][0] + 1);					//11				(arr[0][0][0] + 1 = 11)
	//value + 1
	
	printf("\narr[1] + 1 = %d\n",arr[1] + 1);								//148				(arr[1] + 1 = 10221808)
	//1D size ne pudhe
	
	printf("\narr[1][0] + 1 = %d\n",arr[1][0] + 1);							//136				(arr[1][0] + 1 = 10221796)
	//element size ne pudhe
	
	printf("\narr[1][0][0] + 1 = %d\n",arr[1][0][0] + 1);					//91				(arr[1][0][0] + 1 = 91)
	//value + 1
	
	printf("\narr[2] + 1 = %d\n",arr[2] + 1);								//180				(arr[2] + 1 = 10221840)
	//1D size ne pudhe
	
	printf("\narr[2][0] + 1 = %d\n",arr[2][0] + 1);							//168				(arr[2][0] + 1 = 10221828)
	//element size ne pudhe
	
	printf("\narr[2][0][0] + 1 = %d\n",arr[2][0][0] + 1);					//1					(arr[2][0][0] + 1 = 1)
	//value + 1
	
	printf("\n&arr = %d\n",&arr);											//100 [100-196]		(&arr = 10221760)
	//&(3D naav) => 3D address
	
	printf("\narr = %d\n",arr);												//100 [100-132]		(arr = 10221760)
	//3D naav(2D address)
	
	printf("\n*arr = %d\n",*arr);											//100 [100-116]		(*arr = 10221760)
	//*(3D naav) => 2D naav(1D address)
	
	printf("\n**arr = %d\n",**arr);											//100 [100-104]		(**arr = 10221760)
	//*(3D naav) => *(2D naav) => 1D naav(element address)
	
	printf("\n***arr = %d\n",***arr);										//10				(***arr = 10)
	//*(3D naav) => *(2D naav) => *(1D naav) => element naav(value)
	
	printf("\n***arr + 1 = %d\n",***arr + 1);								//11				(***arr + 1 = 11)
	//value + 1
	
	printf("\n**arr + 1 = %d\n",**arr + 1);									//104				(**arr + 1 = 10221764)
	//element size ne pudhe
	
	printf("\n*arr + 1 = %d\n",*arr + 1);									//116				(*arr + 1 = 10221776)
	//1D size ne pudhe
	
	printf("\narr + 1 = %d\n",arr + 1);										//132				(arr + 1 = 10221792)
	//2D size ne pudhe
	
	printf("\n&arr + 1 = %d\n",&arr + 1);									//196				(&arr + 1 = 10221856)
	//3D size ne pudhe
	
	printf("\narr + 2 = %d\n",arr + 2);										//164				(arr + 2 = 10221824)
	//2D size ne pudhe (2 vela)
	
	printf("\n*(arr + 2) = %d\n",*(arr + 2));								//164 [164-180]		(*(arr + 2) = 10221824)
	//*(3D level naav) => 2D naav(1D address)
	
	printf("\n*(arr + 2) + 1 = %d\n",*(arr + 2) + 1);						//180				(*(arr + 2) + 1 = 10221840)
	//1D size ne pudhe
	
	printf("\n*(*(arr + 2) + 1) = %d\n",*(*(arr + 2) + 1));					//180 [180-184]		(*(*(arr + 2) + 1) = 10221840)
	//*(2D level naav) => 1D naav(element address)
	
	printf("\n*(*(arr + 2) + 1) + 3 = %d\n",*(*(arr + 2) + 1) + 3);			//192				(*(*(arr + 2) + 1) + 3 = 10221852)
	//element size ne pudhe (3 vela)
	
	printf("\n*(*(*(arr + 2) + 1) + 3) = %d\n",*(*(*(arr + 2) + 1) + 3));	//0					(*(*(*(arr + 2) + 1) + 3) = 0)
	//*(1D level naav) => element naav(value)
	
	return 0;
}
