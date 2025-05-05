#include <stdio.h>
#define MAX 3

struct demo
{
	int iNo;
	float fNo;
};

int main(void)
{
	int iCounter;
	struct demo arrObjets[MAX];
	/*  
		ABOVE(13):- 'arrObjets' is array('[') which contains 'MAX' elements...and each element of type 'struct demo'
	*/
	
	for(iCounter = 0; iCounter < MAX ; iCounter++)
	{
		printf("\nEnter OBJ%d Values :- ",iCounter+1);
		printf("\n\tEnter Integer :-");					//10		20		30
		scanf("%d",&arrObjets[iCounter].iNo);
		printf("\tEnter Float :-");						//11.11		21.21	31.31
		scanf("%f",&arrObjets[iCounter].fNo);
	}
	
	for(iCounter = 0; iCounter < MAX; iCounter++)
	{
		printf("\nOBJ%d Values are..",iCounter+1);
		printf("\n\tInteger is %d",arrObjets[iCounter].iNo);	//10	20	  30
		printf("\n\tFloat is %f\n",arrObjets[iCounter].fNo);	// 11.110000	21.110001	31.110001
	}
	
	return 0;
}
