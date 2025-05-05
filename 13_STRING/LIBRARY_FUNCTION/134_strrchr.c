#include <stdio.h>
#include <string.h>
#define MAX 25

int main(void)
{
	char chChar;
	char szStr[MAX];
	char *pPtr = NULL;
	
	printf("\nEnter String : ");					//Enter String : HELLO
	gets(szStr);
	
	printf("\nEnter Character To Be Search : ");	//Enter Character To Be Search : L
	scanf("%c",&chChar);
	
	pPtr = strrchr(szStr,chChar);
	
	if(NULL == pPtr)
		printf("\nCharacter Not Found.\n");
	else
		printf("\nCharacter Found At %dth Location.\n",(pPtr - szStr) + 1);		//Character Found At 4th Location.
	
	return 0;
}
