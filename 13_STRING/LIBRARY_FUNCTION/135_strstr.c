#include <stdio.h>
#include <string.h>
#define MAX 25

int main(void)
{
	char szStr1[MAX];
	char szStr2[MAX];
	char *pPtr = NULL;
	
	printf("\nEnter String : ");							//Enter String : My name is amit
	gets(szStr1);
	
	printf("\nEnter The String Wanted To Search : ");		//Enter The String Wanted To Search : amit
	gets(szStr2);
	
	pPtr = strstr(szStr1, szStr2);
	
	if(NULL == pPtr)
		printf("\nString Not Found.\n");					
	else
		printf("\nString :\"%s\" is Found At %dth Location\n",pPtr,(pPtr - szStr1) + 1);	//String :"amit" is Found At 12th Location
	
	return 0;
}
