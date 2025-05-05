#include <stdio.h>
#define MAX 25

char* Mystrchr(const char *, char);

int main(void)
{
	char chChar;
	char szStr[MAX];
	char *pPtr = NULL;
	
	printf("\nEnter String : ");												//Enter String : hello
	gets(szStr);
	
	printf("\nEnter Character To Be Search : ");								//Enter Character To Be Search : l
	scanf("%c",&chChar);
	
	pPtr = Mystrchr(szStr,chChar);
	
	if(NULL == pPtr)
		printf("\nCharacter Not Found.\n");										
	else
		printf("\nCharacter Found At %dth Location.\n",(pPtr - szStr) + 1);		//Character Found At 3th Location.
	
	return 0;
}

char* Mystrchr(const char *pszStr, char chChar)
{
	unsigned short int ushiCounter = 0;
	
	while(pszStr[ushiCounter] != '\0')
	{
		if(pszStr[ushiCounter] == chChar)
			return &pszStr[ushiCounter];
		ushiCounter++;
	}
	
	return NULL;
}
