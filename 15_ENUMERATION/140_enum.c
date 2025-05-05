#include <stdio.h>

enum SWITCH{off, on};
enum CIRCUIT{Series = 1, Parallel = 2};

int main(void)
{
	enum CIRCUIT ckt;
	enum SWITCH S1, S2;
	
	printf("\nWhich Circuit Do You Want ? (Series = 1, Parallel = 2) : ");		//2
	scanf("%d",&ckt);
	
	printf("\nEnter Two Switches (off = 0, on = 1) : ");						//1		0
	scanf("%d%d",&S1,&S2);
	
	if(ckt  == Series)
	{
		if(S1 == on && S2 == on)
			printf("\nBulb Will Glow.\n");
		else 
			printf("\nBulb Will Not Glow.\n");
	}
	else
	{
		if(S1 == on || S2 == on)
			printf("\nBulb Will Glow.\n");										//Bulb Will Glow.
		else 
			printf("\nBulb Will Not Glow.\n");		
	}
	
	return 0;
}
