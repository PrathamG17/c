#include <stdio.h>

int main(void)
{
	int iNo;
	int iSpace;
	int iCounter1 = 1;
	int iCounter2;
	
	printf("\nEnter Number : ");
	scanf("%d",&iNo);
	
	do
	{
		iSpace = iNo;						//user count pramane.. top to bottom space neet yave yaasathi...
		
		do
		{
			printf(" ");					//space print kele.. counter paramane...
			iSpace--;
		}while(iSpace >= iCounter1);		
		
		iCounter2 = 1;
		do
		{
			printf("* ");
			//printf("%d ", iCounter1);		//tya nantar.. value print keli...
			++iCounter2;
		}while(iCounter2 <= iCounter1);		//ekda-->donda-->then teenda and so on...
		
		printf("\n");
		++iCounter1;
	}while(iCounter1 <= iNo);				//eka value ch kaam jhala ki pudhe then...
	
	return 0;
}
