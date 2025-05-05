#include <stdio.h>

struct demo
{
	int iNo;
	float fNo;
};

int Compare(struct demo, struct demo);

int main(void)
{
	int iRet;
	struct demo dObj1;
	struct demo dObj2;
	
	printf("\nEnter Obj1 Values =>\n");
	printf("\n\tEnter Integer :- ");			//10
	scanf("%d",&dObj1.iNo);
	printf("\n\tEnter Float :- ");				//11.11
	scanf("%f",&dObj1.fNo);
	
	printf("\nEnter Obj2 Values =>\n");
	printf("\n\tEnter Integer :- ");			//10
	scanf("%d",&dObj2.iNo);
	printf("\n\tEnter Float :- ");				//11.11
	scanf("%f",&dObj2.fNo);
	
	printf("\nObj1 Values Are..\n");
	printf("\n\tInteger is %d\n",dObj1.iNo);	//10
	printf("\n\tFloat is %f\n",dObj1.fNo);		//11.110000
	
	printf("\nObj2 Values Are..\n");
	printf("\n\tInteger is %d\n",dObj2.iNo);	//10
	printf("\n\tFloat is %f\n",dObj2.fNo);		//11.110000
		
	iRet = Compare(dObj1,dObj2);
	
	if(1 == iRet)
		printf("\nObjects Are Equal\n");		//Objects Are Equal
	else
		printf("\nObjects Are Not Equal\n");
	
	return 0;
}

int Compare(struct demo dObj1, struct demo dObj2)
{
	if(dObj1.iNo == dObj2.iNo && dObj1.fNo == dObj2.fNo)
		return 1;
	return 0;
}
