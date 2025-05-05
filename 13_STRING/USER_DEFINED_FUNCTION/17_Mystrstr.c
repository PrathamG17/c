#include <stdio.h>
#define MAX 25

char* Mystrstr(const char *, const char *);

int main(void)
{
	char szStr1[MAX];
	char szStr2[MAX];
	char *pPtr = NULL;
	
	printf("\nEnter String : ");									//Enter String : My name is amit
	gets(szStr1);
	
	printf("\nEnter The String Wanted To Search : ");				//Enter The String Wanted To Search : amit
	gets(szStr2);
	
	pPtr = Mystrstr(szStr1, szStr2);
	
	if(NULL == pPtr)
		printf("\nString Not Found.\n");
	else
		printf("\nString :\"%s\" is Found At %dth Location\n",pPtr,(pPtr - szStr1) + 1);	//String :"amit" is Found At 12th Location
	
	return 0;
}

char* Mystrstr(const char *pszStr1, const char *pszStr2)
{
	char *pPtr = NULL;
	unsigned short int ushiCounter1 = 0;
	unsigned short int ushiCounter2 = 0;
	unsigned short int ushiCounter3 = 0;
	
	while(pszStr1[ushiCounter1] != '\0')
	{
		if(pszStr1[ushiCounter1] == pszStr2[0])
		{
			ushiCounter3 = ushiCounter1;
			pPtr = &pszStr1[ushiCounter3];
			ushiCounter2 = 0;
			while(pszStr2[ushiCounter2] != '\0')
			{
				if(pszStr1[ushiCounter3] == pszStr2[ushiCounter2])
				{
					ushiCounter3++;
					ushiCounter2++;
					continue;
				}
				else
					break;
			}
			
			if(pszStr2[ushiCounter2] == '\0')
				return pPtr;
		}
		
		pPtr = NULL;
		ushiCounter1++;
	}
	
	return pPtr;
}
