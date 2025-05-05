#include <stdio.h>

int main(void)
{
	int arr[][2] = {10,20,30,40,50};
	/*  
		ABOVE(5) :- 1D cha element --> means element 
					2D cha element --> means 1D
	*/
	
	printf("\narr = %d",arr);				//5504612
	/*  
		ABOVE(7) :- 2D ch naav means element(1D) address...(100-108)
	*/

	printf("\n&arr = %d",&arr);				//5504612
	/*  
		ABOVE(12) :- 2D chya navala..& means sampurn 2D ch address...(100-124)
	*/
	
	printf("\narr+1 = %d",arr+1);			//5504616
	/*  
		ABOVE(17) :- addition pahila operand address asel tar tya address itkya size ne pudhe sarakh..second operand velaa..
	*/
	
	printf("\n&arr+1 = %d",&arr+1);			//5504632
	/*  
		ABOVE(22) :- same as 17
	*/

	printf("\narr[0] = %d",arr[0]);			//10

	printf("\n&arr[0] = %d",&arr[0]);		//5504612
	/*  
		ABOVE(29) :- '2D' madhlya 0th element(1D) cha naav (i.e. 1D ch naav)  aani tya navala & 
	*/

	printf("\n&arr[0]+1 = %d",&arr[0]+1);	//5504616
	/*  
		ABOVE(35) :- element(1D) size ne pudhe ekda..
	*/
	printf("\narr[2] = %d",arr[2]);			//30

	printf("\n&arr[2] = %d",&arr[2]);		//5504620
	/*  
		ABOVE(44) :- '2D' madhlya 2nd 1D ch naav... aani tya navala '&'
	*/
	
	printf("\n&arr[2]+2 = %d",&arr[2]+2);	//5504628

	//printf("\narr = %d",++arr);		//(27) : error C2105: '++' needs l-value

	//printf("\narr = %d",arr++);		//(29) : error C2105: '++' needs l-value
	
	return 0;
}
