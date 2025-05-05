#include <stdio.h>

struct demo1
{
	char chChar;
	double dNo;
}dObj1;

struct demo2
{
	int iNo;
	double dNo;
}dObj2;

struct demo3
{
	char chChar;
	int iNo;
}dObj3;

struct demo4
{
	char chChar1;
	char chChar2;
}dObj4;
/*  
	ABOVE:- compiler objects naa  kiti memory denyachi soy karaychi hee...alignment size calculate karun...(by 
			comparing processor's word size and structure declaration largest size) tharavto...
		 :-  Memory alignment by default time complexity kami karnyachya hetune keli jate...(by compiler according our 
			structure declaration)
*/
int main(void)
{
	printf("\nSize of dObj1 => %d\n",sizeof(dObj1));	//Size of dObj1 => 16
	printf("\nSize of dObj2 => %d\n",sizeof(dObj2));	//Size of dObj2 => 16
	printf("\nSize of dObj3 => %d\n",sizeof(dObj3));	//Size of dObj3 => 8
	printf("\nSize of dObj4 => %d\n",sizeof(dObj4));	//Size of dObj4 => 2
	
	return 0;
}
