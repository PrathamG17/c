#include <stdio.h>

struct demo
{
	int iNo;
	float fNo;
};

void Scan(struct demo *);	//@param pPtr (Out Parameter)
void Print(struct demo *);	//@param pPtr (In Parameter)

int main(void)
{
	struct demo dObj;
	
	Scan(&dObj);
	Print(&dObj);
	
	return 0;
}

void Scan(struct demo *pPtr)
{
	printf("\nEnter Integer :- ");			//10
	scanf("%d",&(*pPtr).iNo);
	
	printf("\nEnter Float :- ");			//10.10
	scanf("%f",&pPtr->fNo);
}

void Print(struct demo *pPtr)
{
	printf("\nInteger is %d\n",(*pPtr).iNo);	//10
	printf("\nFloat is %f\n",pPtr->fNo);		//10.100000
}
