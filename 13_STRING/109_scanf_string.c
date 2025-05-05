#include <stdio.h>

int main(void)
{
	char szName[50];
	/*
		ABOVE(5) : strings can only be stored in character array or character pointer.
	*/
	printf("\nEnter Name : ");			//Enter Name : Prathamesh Gaikwad
	scanf("%s",szName);			
	/*
		ABOVE(10) : 1)scanf limitation -->because of unkown about sizeof(address given by caller).
									   -->scanf doesn't perform boundry checking(of actual memory) during storing of string 
										  over address.
									   -->which may be result in program crash.
					2)scanf received string upto but not including white space characters[newline[Enter],tab,space].
	*/
	printf("\nName : %s\n",szName);		//Name : Prathamesh
	
	return 0;
}
