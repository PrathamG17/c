#include <stdio.h>
#define MAX 25

char* Mystrrchr(const char *, char);

int main(void)
{
	char chChar;
	char szStr[MAX];
	char *pPtr = NULL;
	
	printf("\nEnter String : ");												//Enter String : hello
	gets(szStr);
	
	printf("\nEnter Character To Be Search : ");								//Enter Character To Be Search : l
	scanf("%c",&chChar);
	
	pPtr = Mystrrchr(szStr,chChar);
	
	if(NULL == pPtr)
		printf("\nCharacter Not Found.\n");
	else
		printf("\nCharacter Found At %dth Location.\n",(pPtr - szStr) + 1);		//Character Found At 4th Location.
	
	return 0;
}

char* Mystrrchr(const char *pszStr, char chChar)
{
	char *pTemp = NULL;
	unsigned short int ushiCounter = 0;
	
	while(pszStr[ushiCounter]  != '\0')
	{
		if(pszStr[ushiCounter] == chChar)
			pTemp = &pszStr[ushiCounter];
		
		ushiCounter++;
	}
	
	return pTemp;
}
