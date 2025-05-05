#include <stdio.h>

int main(void)
{
	int iCounter;
	int iCounter1;
	int iCounter2;
	
	for(iCounter = 0; iCounter < 3; iCounter++)
		printf("%d\t",iCounter);						//0       1       2
			
	printf("\n\n");
	
	for(iCounter1 = 0, iCounter2 = 3; iCounter1 < 3 && iCounter2 > 0; iCounter1++, iCounter2--)
	{
		printf(" %d\t",iCounter1);						//0		1		2
		printf(" %d",iCounter2);						//3		2		1
		printf("\n");
	}
	
	printf("\n\n");
	
	//version1
	iCounter = 0;
	for(; iCounter < 3; iCounter++)
		printf("%d\t",iCounter);						//0       1       2
	
	printf("\n\n");
	
	//version2
	for(iCounter = 0; ; iCounter++)
	{
		if(3 == iCounter)
			break;
		
		printf("%d\t",iCounter);						//0       1       2
	}
	
	printf("\n\n");
	
	//version3
	for(iCounter = 0; iCounter < 3;)
	{
		printf("%d\t",iCounter);						//0       1       2
		iCounter++;
	}
	
	printf("\n\n");
	
	//version4
	iCounter = 0;
	for(; ;)
	{
		if(3 == iCounter)
			break;
		
		printf("%d\t",iCounter);						//0       1       2
		iCounter++;
	}
		
	printf("\n\n");
	
	//version5
	iCounter = 0;
	for(; iCounter < 3;)
	{
		printf("%d\t",iCounter);						//0       1       2
		iCounter++;
	}
		
	iCounter = 3;
	for(; iCounter < 3;)								//condition false
	{
		printf("%d\t",iCounter);						
		iCounter++;
	}
	
	return 0;
}
