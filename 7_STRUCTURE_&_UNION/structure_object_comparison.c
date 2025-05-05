#include <stdio.h>

struct demo
{
	int iNo;
	float fNo;
};

int Compare(struct demo, struct demo);

int main(void)
{
	int iCheck;
	struct demo dObj1;
	struct demo dObj2;
	
	printf("\n#Enter Object 1 Values..\n");	
	printf("\nEnter Integer =\t");				//10
	scanf("%d",&dObj1.iNo);	
	printf("\nEnter float =\t");				//11.11
	scanf("%f",&dObj1.fNo);

	printf("\n\n#Enter Object 2 Values..\n");
	printf("\nEnter Integer =\t");				//10
	scanf("%d",&dObj2.iNo);	
	printf("\nEnter float =\t");				//11.11
	scanf("%f",&dObj2.fNo);
	
	printf("\n\n-->Object 1 Values Are..\n");
	printf("\nInteger is =>%d\n",dObj1.iNo);	//10
	printf("\nFloat is =>%f",dObj1.fNo);		//11.110000
	
	printf("\n\n-->Object 2 Values Are..\n");
	printf("\nInteger is =>%d\n",dObj2.iNo);	//10
	printf("\nFloat is =>%f",dObj2.fNo);		//11.110000
	
	iCheck = Compare(dObj1,dObj2);
	if(1 == iCheck)
		printf("\n\n-->Objects Are Equal\n\n");	//Equal
	else
		printf("\n\n-->Objects Are Not Equal\n\n");

	return 0;
}

int Compare(struct demo dObj1, struct demo dObj2)
{
	if(dObj1.iNo == dObj2.iNo && dObj1.fNo == dObj2.fNo)
		return 1;
	
	return 0;
}