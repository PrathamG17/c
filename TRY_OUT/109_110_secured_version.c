#include <stdio.h>

int main(void)
{
	char szName[50];
	
	/* printf("\nEnter Name : ");
	scanf_s("%s",szName,sizeof(szName));
	
	printf("\nName{by scanf_s} : %s\n",szName); */

	printf("\nEnter Name : ");
	gets_s(szName,sizeof(szName));
	//ABOVE : '_s' where 's' stands for security.
	
	printf("\nName{by gets_s} : %s\n",szName);

	return 0;
}
