#include <stdio.h>

struct demo
{
	int iNo;
	float fNo;
};
/*
	@param	dObj1 (In Parameter)
	@param	pObj2 (Out Parameter)
	@param 	pObj3 (Out Parameter)
*/
void AssignObjects(struct demo, struct demo *, struct demo *);

int main(void)
{
	struct demo dObj1;
	struct demo dObj2;
	struct demo dObj3;
	
	printf("\nEnter Integer :- ");			//10
	scanf("%d",&dObj1.iNo);
	printf("\nEnter Float :- ");			//11.11
	scanf("%f",&dObj1.fNo);
	
	AssignObjects(dObj1,&dObj2,&dObj3);
	
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

void AssignObjects(struct demo dObj1, struct demo *pObj2, struct demo *pObj3)
{
	*pObj2 = dObj1;				//Direct assignment
	
	pObj3->iNo = dObj1.iNo;
	pObj3->fNo = dObj1.fNo;
	//ABOVE(47,48):- Member by member assignment...
}
