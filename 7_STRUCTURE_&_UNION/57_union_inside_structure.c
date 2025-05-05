#include <stdio.h>

struct outer1
{
	char chChar;
	int iNo;
	union inner1
	{
		char chChar;
		int iNo;
	}iObj1,iObj2;
}oObj1;

struct outer2
{
	int iNo;
	float fNo;
	union inner2
	{
		char chChar;
		double dNo;
	}iObj[2];
	double dNo;
}oObj2;

int main(void)
{
	printf("\nSize of oObj1 = %d\n",sizeof(oObj1));	//Size of oObj1 = 16
	printf("\nSize of oObj2 = %d\n",sizeof(oObj2));	//Size of oObj2 = 32
	
	return 0;
}
