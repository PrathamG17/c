#include <stdio.h>

union outer1
{
	char chChar;
	double dNo;
	struct inner1
	{
		char chChar;
		double dNo;
	}iObj1,iObj2;		//------(Lragest)
}oObj1;

union outer2
{
	char chChar;
	double dNo;
	struct inner2
	{
		int iNo;
		float fNo;
	}iObj[3];			//-------(Largest)
}oObj2;

int main(void)
{
	printf("\nSize of oObj1 = %d\n",sizeof(oObj1));	//Size of oObj1 = 16
	printf("\nSize of oObj2 = %d\n",sizeof(oObj2));	//Size of oObj2 = 24
	
	return 0;
}
