#include <stdio.h>

int main(void)
{
	char szName[50];
	
	printf("\nEnter Name : ");				//Enter Name : Prathamesh Gaikwad
	gets(szName);
	/*
		ABOVE(8) : 'gets' received string upto but not including only newline character.
	*/
	printf("\nName : %s\n",szName);			//Name : Prathamesh Gaikwad
	
	return 0;
}
