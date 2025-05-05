#include <stdio.h>

int main(void)
{
	struct Student
	{
		char szName[25];
		int iRollNo;
		int iPercent;
	};
	
	char chTemp;
	FILE *fp = NULL;
	char chChar = 'y';
	struct Student sObj;
	
	fp = fopen("159_structure_from_keyboard_to_file_fwrite.txt", "w");
	if(NULL == fp)
	{
		printf("\nCan't Open File");
		return -1;
	}
	
	while(chChar == 'y' || chChar == 'Y')
	{
		printf("\nEnter Name, Roll No & Percentage Respectively : ");
		scanf("%s%d%d", sObj.szName, &sObj.iRollNo, &sObj.iPercent);
		fwrite(&sObj, sizeof sObj, 1, fp);
		
		printf("\nDo You Want To Enter More Student Records[y/n] : ");
		scanf("%c%c", &chTemp, &chChar);
	}
	
	if(fp != NULL)
	{
		fclose(fp);
		fp = NULL;
	}
	
	return 0;
}
/*  
	o/p :
		
	Enter Name, Roll No. & Percentage Respectively : Prathamesh 70 92

	Do You Want To Enter More Students Records [y/n] : y

	Enter Name, Roll No. & Percentage Respectively : Nihar 69 96

	Do You Want To Enter More Students Records [y/n] : n
*/
