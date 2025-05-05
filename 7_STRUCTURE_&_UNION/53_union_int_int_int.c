#include <stdio.h>

union demo
{
	int iNo1;
	int iNo2;
	int iNo3;
};
/* 
	ABOVE:- In union all members will share memory reserved by union object (i.e. largest member size reserved memory)...
			In above case it is 4 byte (i.e. sizeof(union dObj) => 4)
			According to respective members characteristics it will share that reserved 32 bits... of dObj
*/
int main(void)
{
	union demo dObj;
	/*  
		ABOVE(16) :- dObj 
					 storage class:- auto
					 default value:- Garbage
					 scope:- block
					 lietime:-local
					 linkage:- no linkage
	*/
	
	printf("\niNo1 = %d\tiNo2 = %d\tiNo3 = %d\n",dObj.iNo1,dObj.iNo2,dObj.iNo3);	//iNo1 = 1        iNo2 = 1        iNo3 = 1
		
	dObj.iNo1 = 10;
	printf("\niNo1 = %d\tiNo2 = %d\tiNo3 = %d\n",dObj.iNo1,dObj.iNo2,dObj.iNo3);	//iNo1 = 10       iNo2 = 10       iNo3 = 10

	dObj.iNo2 = 20;
	printf("\niNo1 = %d\tiNo2 = %d\tiNo3 = %d\n",dObj.iNo1,dObj.iNo2,dObj.iNo3);	//iNo1 = 20       iNo2 = 20       iNo3 = 20

	dObj.iNo3 = 30;
	printf("\niNo1 = %d\tiNo2 = %d\tiNo3 = %d\n",dObj.iNo1,dObj.iNo2,dObj.iNo3);	//iNo1 = 30       iNo2 = 30       iNo3 = 30
	
	return 0;
}
