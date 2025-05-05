#include <stdio.h>						//preprocessor directive

void Addition(void);					//function prototype/ declaration

int main(void)							//function definition
{
	Addition();
	
	return 0;
}

void Addition(void)						//function definition 
{
	int iNo1;
	int iNo2;
	int iAns;
	
	printf("\nEnter Two Numbers :\t");
	scanf("%d%d",&iNo1,&iNo2);
	
	iAns = iNo1 + iNo2;
	
	printf("\nAddition is : %d\n",iAns);
}
