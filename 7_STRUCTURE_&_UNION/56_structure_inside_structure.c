#include <stdio.h>

struct outer1
{
	int iNo1;
	float fNo1;
	struct inner1
	{
		int iNo2;
		float fNo2;
	};
}oObj1;
/*  
	ABOVE:- inner1 type object not created hence ...compiler iNo2 aani fNo2 donhi members na...baher aanto 
			i.e. outer1 madhe..hence line 60,61 allow...
*/
struct outer2
{
	int iNo;
	float fNo;
	struct inner2
	{
		int iNo;
		float fNo;
	}iObj;
}oObj2;

struct outer3
{
	char chChar;
	int iNo;
	struct inner3
	{
		int iNo;
		float fNo;
	}iObj1,iObj2;
}oObj3;

struct outer4
{
	int iNo;
	double dNo;
	struct inner4
	{
		int iNo;
		float fNo;
	}iObj[3];
}oObj4;
/*  
	ABOVE:- for all above declared structures... redefinition of same inner structures are also not allowed...hence they 
			differentiated as 1,2..
*/
int main(void)
{
	printf("\nSize of oObj1 = %d\n",sizeof(oObj1));	//Size of oObj1 = 16
	printf("\nSize of oObj2 = %d\n",sizeof(oObj2));	//Size of oObj2 = 16
	printf("\nSize of oObj3 = %d\n",sizeof(oObj3));	//Size of oObj3 = 24
	printf("\nSize of oObj4 = %d\n",sizeof(oObj4));	//Size of oObj4 = 40
	
	// printf("\noObj1.iNo2 = %d\n",oObj1.iNo2);	//oObj1.iNo2 = 0
	// printf("\noObj1.fNo2 = %f\n",oObj1.fNo2);	//oObj1.fNo2 = 0.000000
	/*  
		ABOVE(60,61):- all objects defined above...has
						storage class:- extern
						default value:- zero
						scope:- global
						lifetime:- global
						linkage:- extern
	*/
	return 0;
}
/*  
	for size calculation of structure or union objects...
	1)object cha type konta?
	2)tya object madhe  kiti member aahet?
	3)saglya members chi naave kaay?
	4)prateka chi size kaay?
	
	now if object is structure then -->add all sizes...
		if object is union then --> largest size is object size..

	# 'struct' is not a user defined data type ...it is a keyword which is used to create user defined data type..same for
		union as well...
*/