#include <stdio.h>

int g_iNo1;					//allowed,definition,extern
int g_iNo2 = 10;			//allowed,definition,extern
extern int g_iNo3;			//allowed,declaration
extern int g_iNo4 = 20;		//allowed,definition,extern

int main(void)
{
	int iNo1;				//allowed,definition,auto
	int iNo2 = 10;			//allowed,definition,auto
	extern int iNo3;		//allowed,declaration
	//extern int iNo4 = 20;	// : error C2205: 'iNo4' : cannot initialize extern variables with block scope
	
	
	printf("\ng_iNo1 = %d\n",g_iNo1);	// 0
	printf("\ng_iNo2 = %d\n",g_iNo2);	// 10
	//printf("\ng_iNo3 = %d\n",g_iNo3);	//: error LNK2019: unresolved external symbol _g_iNo3 referenced in function _main
	printf("\ng_iNo4 = %d\n",g_iNo4);	//20

	
	printf("\niNo1 = %d\n",iNo1);		// 8333192
	printf("\niNo2 = %d\n",iNo2);		//10
	//printf("\niNo3 = %d\n",iNo3);		//: error LNK2019: unresolved external symbol _iNo3 referenced in function _main
	//printf("\niNo4 = %d\n",iNo4);
	
	return 0;
}
