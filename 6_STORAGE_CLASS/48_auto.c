#include <stdio.h>

int main(void)
{
	int iNo1;
	auto int iNo2;
	/*  
		ABOVE(5,6):- both iNo1,iNo2
					 storage class => auto
					 default value => Garbage
					 scope => block scope
					 lifetime  => local
					 linkage => No Linkage
	*/
	printf("\niNo1 = %d\niNo2 = %d\n",iNo1,iNo2);	// 13117240		13120181
	
	return 0;
}
