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
	
	printf("\nEnter Integer :- ");			//10
	scanf("%d",&dObj1.iNo);
	printf("\nEnter Float :- ");			//11.11
	scanf("%f",&dObj1.fNo);
	
	dObj2 = dObj1;		//Direct assignment
	
	dObj3.iNo = dObj1.iNo;
	dObj3.fNo = dObj1.fNo;
	//ABOVE(22,23):- Member by member assignment...

	printf("\nObj1 Values Are..\n");
	printf("\n\tInteger is %d\n",dObj1.iNo);		//10
	printf("\n\tFloat is %f\n",dObj1.fNo);			//11.110000
	
	printf("\nObj2 Values Are..\n");
	printf("\n\tInteger is %d\n",dObj2.iNo);		//10
	printf("\n\tFloat is %f\n",dObj2.fNo);			//11.110000

	printf("\nObj3 Values Are..\n");
	printf("\n\tInteger is %d\n",dObj3.iNo);		//10
	printf("\n\tFloat is %f\n",dObj3.fNo);			//11.110000

	return 0;
}
