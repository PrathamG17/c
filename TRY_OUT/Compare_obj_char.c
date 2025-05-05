#include <stdio.h>
#pragma pack(1)
struct  demo
{
	char chChar;
	int iNo;
};

int Compare(struct demo, struct demo);

int main(void)
{
	int iRet;
	struct demo dObj1;
	struct demo dObj2;
	
	printf("\nEnter Object 1 Values =>\n");
	printf("\nCharacter is :-\t");
	scanf("%c",&dObj1.chChar);
	printf("Integer is :-\t");
	scanf("%d",&dObj1.iNo);
		
	printf("\nObjects 1 values are...\nCharacter is =>%c\nInteger is =>%d\n",dObj1.chChar,dObj1.iNo);	
	
/* 	iRet = Compare(dObj1,dObj2);
	if(1 == iRet)
		printf("\nObjects Are Equal\n");
	else
		printf("\nObjects Are Not Equal\n");
 */	
	printf("\nEnter Object 2 Values =>\n");
	printf("\nCharacter is :-\t");
	scanf("%c",&dObj2.chChar);
	printf("\nInteger is :-\t");
	scanf("%d",&dObj2.iNo);

	printf("\nObjects 2 values are...\nCharacter is =>%c\nInteger is =>%d\nsizeof(dObj2) = %d\n",dObj2.chChar,\
	dObj2.iNo,sizeof(dObj2));

	return 0;
}

int Compare(struct demo dObj1, struct demo dObj2)
{
	if(dObj1.chChar == dObj2.chChar && dObj1.iNo == dObj2.iNo)
		return 1;
	
	return 0;
}
