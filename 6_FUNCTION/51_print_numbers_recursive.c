#include <stdio.h>

void PrintNumbers1ToN(int);
void PrintNumbersNTo1(int);

int main(void)
{
	int iNo;
	
	printf("\nEnter Number =>\t");		//5
	scanf("%d",&iNo);
	
	printf("\nSerial:-\n");				
	PrintNumbers1ToN(iNo);
	
	printf("\n\nReverse:-\n");
	PrintNumbersNTo1(iNo);
	
	return 0;
}

void PrintNumbersNTo1(int iNo)
{
	if(0 == iNo)
		return;
	
	printf("\n\t%d",iNo);				//5		4		3		2		1	(call jatana print karat jaa)
	
	PrintNumbersNTo1(iNo - 1);
}

void PrintNumbers1ToN(int iNo)
{
	if(0 == iNo)
		return;
	
	PrintNumbers1ToN(iNo - 1);	
	
	printf("\n\t%d",iNo);				//1		2		3		4		5	(call jhalyvar parat yetana print karat yee)
}

	/* 
		Recurion :- Pratham jee karaychay(Primary Target) te karun taka... (27)
					Nantar kasa karaychay..? tyacha vichar karava...	   (29)
					Nantar program chya itar goshtincha vichar karava...   (24,25)
	*/
