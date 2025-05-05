#include <stdio.h>

union outer1
{
	char chChar;
	double dNo;			//------------(Largest)
	union inner1
	{
		int iNo;
		float fNo;
	}iObj1,iObj2;
}oObj1;

union outer2
{
	char chChar;
	double dNo;			//------------(Largest)
	union inner2
	{
		int iNo;
		float fNo;
	}iObj[2];			//------------(Largest)
}oObj2;

int main(void)
{
	printf("\nSize of oObj1 = %d\n",sizeof(oObj1));	//Size of oObj1 = 8
	printf("\nSize of oObj2 = %d\n",sizeof(oObj2));	//Size of oObj2 = 8
	
	return 0;
}
