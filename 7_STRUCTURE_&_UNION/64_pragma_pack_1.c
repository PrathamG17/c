#include <stdio.h>

struct demo1
{
	char chChar;
	double dNo;
}dObj1;

#pragma pack(4)	
/*  
	ABOVE(9):-yaa statement khali declared structures naa..word size 4 maanli jail...
			  until EOF (End Of File) or Another #pragma statement...
*/
struct demo2
{
	char chChar;
	double dNo;
}dObj2;

#pragma pack(1)
/*  
	ABOVE(20):- word size 1 maanli for following declaration...
*/
struct demo3
{
	char chChar;
	double dNo;
}dObj3;

#pragma pack()		
/* 
	ABOVE(25):- for Following declaration ...(blank bracket() indicates ..compiler ne..punha 
				processor chi word size  manun alignment tharvun memory alignment karavi...)
*/

struct demo4
{
	char chChar;
	double dNo;
}dObj4;
/*  
	ABOVE:- pragma=> 'vyvhaarik'... compiler laa...sangnyaasthi yaa preprocessor directive cha vaapar hoto...
*/
int main(void)
{
	printf("\nSize of dObj1 :- %d\n",sizeof(dObj1));	//size of dObj1	16
	printf("\nSize of dObj2 :- %d\n",sizeof(dObj2));	//size of dObj2	12
	printf("\nSize of dObj3 :- %d\n",sizeof(dObj3));	//size of dObj3	9
	printf("\nSize of dObj4 :- %d\n",sizeof(dObj4));	//size of dObj4	16
	
	return 0;
}
