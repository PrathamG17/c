#include <stdio.h>

union demo
{
	int iNo1;
	int iNo2;
	int iNo3;
};
int main(void)
{
	union demo dObj;
	
	printf("\niNo1 = %d\tiNo2 = %d\tiNo3 = %d\n",dObj.iNo1,dObj.iNo2,dObj.iNo3);	//1    1     1
		
	dObj.iNo1 = 10;
	printf("\niNo1 = %d\tiNo2 = %d\tiNo3 = %d\n",dObj.iNo1,dObj.iNo2,dObj.iNo3);	//10     10     10

	dObj.iNo2 = 20;
	printf("\niNo1 = %d\tiNo2 = %d\tiNo3 = %d\n",dObj.iNo1,dObj.iNo2,dObj.iNo3);	//20     20     20

	dObj.iNo3 = 30;
	printf("\niNo1 = %d\tiNo2 = %d\tiNo3 = %d\n",dObj.iNo1,dObj.iNo2,dObj.iNo3);	//30     30     30
	
	return 0;
}
