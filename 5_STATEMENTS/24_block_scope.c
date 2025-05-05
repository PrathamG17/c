#include <stdio.h>

int main(void)
{
	int iNo1 = 10;
	
	printf("\niNo1 = %d",iNo1);					//allowed , 10
	//printf("\niNo2 = %d",iNo2);				// error C2065: 'iNo2' : undeclared identifier
	
	{
		int iNo2 = 20;							//block scope
		printf("\n\niNo1 = %d",iNo1);			//allowed , 10
		printf("\niNo2 = %d",iNo2);				//allowed , 20
	}
	
	printf("\n\niNo1 = %d",iNo1);				//allowed , 10
	//printf("\niNo2 = %d",iNo2);				// error C2065: 'iNo2' : undeclared identifier

	return 0;
}