#include <stdio.h>

void Fun1(void);
void Fun2(void);

int main(void)
{
	extern int g_iNo;								//declaration statement	
	/* 
		ABOVE:- iNo navacha integer variable aahe..tyas..ithe memory deu nako..to externally define kelay(within file or outside
				file) jithe define kelay..tithe tyacha storage class extern asun..linkage external aahe..
	*/
	printf("\nIn main(),g_iNo = %d\n",g_iNo);		//10
	/* 
		ABOVE(15):- yaa thikani compiler kade g_iNo chi kasalich definition navhti mhnun ithe linkage external manla..
				 :- jar static definition line 5 la asel tar..ithe irrespective of extern declaration statement ithe 
					linkage internal manla jatay...kaa? tar yaa veli file madhe..g_iNo exist karto with internal linkage..
	*/
	Fun1();
	
	return 0;
}

static int g_iNo = 20;

void Fun2(void)
{
	printf("\nIn Fun2(), g_iNo = %d\n",g_iNo);		
	/* 
		ABOVE(30):- yaa thikani compiler kade g_iNo chi static definition aahe mhnun ithe linkage internal manla..
	*/
}
