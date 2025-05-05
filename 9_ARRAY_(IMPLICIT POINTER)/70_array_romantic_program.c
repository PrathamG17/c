#include <stdio.h>

int main(void)
{
	int arr[] = {10,20,30,40,50};
	
	printf("\narr = %d\n",arr);					//100 		(5504612)
	/*  
		ABOVE(7) :- array ch naav means element address...(100-104)
	*/

	printf("\n&arr = %d\n",&arr);				//100 		(5504612)
	/*  
		ABOVE(12) :- array chya navala..& means sampurn array ch address...(100-120)
	*/
	
	printf("\narr+1 = %d\n",arr+1);				//104 		(5504616)
	/*  
		ABOVE(17) :- addition pahila operand address asel tar tya address itkya size ne pudhe sarakh..second operand velaa..
	*/
	
	printf("\n&arr+1 = %d\n",&arr+1);			//120 		(5504632)
	/*  
		ABOVE(22) :- same as 17
	*/

	printf("\narr[0] = %d\n",arr[0]);			//10

	printf("\n&arr[0] = %d\n",&arr[0]);			//100 		(5504612)
	/*  
		ABOVE(29) :- 'arr' madhlya 0th element cha naav (i.e. int ch naav)  aani tya navala & 
				  :- 1D    madhlya 0th element cha naav (i.e. int ch naav)  aani tya navala &
	*/

	printf("\n&arr[0]+1 = %d\n",&arr[0]+1);		//104 		(5504616)
	/*  
		ABOVE(35) :- element size ne pudhe ekda..
	*/
	printf("\narr[2] = %d\n",arr[2]);			//30

	printf("\n&arr[2] = %d\n",&arr[2]);			//108 		(5504620)
	
	printf("\n&arr[2]+2 = %d\n",&arr[2]+2);		//116 		(5504628)

	//printf("\narr = %d\n",++arr);				//(27) : error C2105: '++' needs l-value

	//printf("\narr = %d\n",arr++);				//(29) : error C2105: '++' needs l-value
	
	return 0;
}
