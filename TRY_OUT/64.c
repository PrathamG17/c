#include <stdio.h>

struct demo1
{
	char chChar;
	double dNo;
}dObj1;

#pragma pack(4)	
struct demo2
{
	char chChar;
	double dNo;
}dObj2;

#pragma pack(1)
struct demo3
{
	char chChar;
	double dNo;
}dObj3;

#pragma pack()		
struct demo4
{
	char chChar;
	double dNo;
}dObj4;
int main(void)
{
	printf("\nSize of dObj1 :- %d\n",sizeof(dObj1));	//16
	printf("\nSize of dObj2 :- %d\n",sizeof(dObj2));	//12
	printf("\nSize of dObj3 :- %d\n",sizeof(dObj3));	//9
	printf("\nSize of dObj4 :- %d\n",sizeof(dObj4));	//16
	
	return 0;
}
