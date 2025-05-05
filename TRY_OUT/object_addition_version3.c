#include<stdio.h>

struct Add
{
	int iNum1;
	int iNum2;
};

void Scan(struct Add *pAddition);
int Addition1(const struct Add *pAddition);

int main(void)
{
	struct Add Addition;
	
	Scan(&Addition);
	printf("\n\t\t\tAddition Of Your Two Numbers : %d\n",Addition1(&Addition));
	
	return 0;
}
void Scan(struct Add *pAddition)
{
	printf("\n\t\t\tEnter Your Two Numbers : ");
	scanf("%d%d",&pAddition->iNum1,&pAddition->iNum2);
}
int Addition1(const struct Add *pAddition)	//save memory and used const 
{
	return (*pAddition).iNum1+(*pAddition).iNum2;	//internal
}
