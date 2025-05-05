#include <stdio.h>

struct demo
{
	int iNo;
	float fNo;
};

int main(void)
{
	struct demo dObj1;
	struct demo dObj2;
	struct demo dObj3;
	
	printf("\n#Enter Object Values..\n");
	
	printf("\nEnter Integer =\t");		//10
	scanf("%d",&dObj1.iNo);
	
	printf("\nEnter float =\t");		//11.11
	scanf("%f",&dObj1.fNo);
	
	//direct assignment
	dObj2 = dObj1;
	
	//member by member assignment
	dObj3.iNo = dObj1.iNo;
	dObj3.fNo = dObj1.fNo;
	
	printf("\n-->Object 1 Values Are..\n");
	printf("\nInteger is =>%d\n",dObj1.iNo);	//10
	printf("\nFloat is =>%f",dObj1.fNo);		//11.110000
	
	printf("\n\n-->Object 2 Values Are..\n");
	printf("\nInteger is =>%d\n",dObj2.iNo);	//10
	printf("\nFloat is =>%f",dObj2.fNo);		//11.110000
	
	printf("\n\n-->Object 3 Values Are..\n");
	printf("\nInteger is =>%d\n",dObj3.iNo);	//10
	printf("\nFloat is =>%f\n",dObj3.fNo);		//11.110000
	
	return 0;
}
