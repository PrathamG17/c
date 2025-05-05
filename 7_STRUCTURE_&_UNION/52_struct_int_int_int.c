#include <stdio.h>

struct demo
{
	int iNo1;
	int iNo2;
	int iNo3;
};
/* 
	ABOVE:- In structure all members will get their own memory...
*/
int main(void)
{
	struct demo dObj;
	/*  
		ABOVE(14) :- dObj 
					 storage class:- auto
					 default value:- Garbage
					 scope:- block
					 lietime:-local
					 linkage:- no linkage
	*/
	
	printf("\niNo1 = %d\tiNo2 = %d\tiNo3 = %d\n",dObj.iNo1,dObj.iNo2,dObj.iNo3);	// 13317179	 7339216	 13314238
		
	dObj.iNo1 = 10;
	printf("\niNo1 = %d\tiNo2 = %d\tiNo3 = %d\n",dObj.iNo1,dObj.iNo2,dObj.iNo3);	//	10	 7339216	 13314238

	dObj.iNo2 = 20;
	printf("\niNo1 = %d\tiNo2 = %d\tiNo3 = %d\n",dObj.iNo1,dObj.iNo2,dObj.iNo3);	//	10	 20		 13314238

	dObj.iNo3 = 30;
	printf("\niNo1 = %d\tiNo2 = %d\tiNo3 = %d\n",dObj.iNo1,dObj.iNo2,dObj.iNo3);	//	 10		20		 30
	
	return 0;
}
