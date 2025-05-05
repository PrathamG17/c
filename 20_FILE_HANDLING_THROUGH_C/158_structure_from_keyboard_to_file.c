#include <stdio.h>

int main(void)
{
	struct Student
	{
		char szName[25];
		int iRollNo;
		float fPercent;
	};
	
	char chTemp;
	FILE *fp = NULL;
	char chChar = 'y';
	struct Student sObj;
		
	fp = fopen("158_structure_from_keyboard_to_file.txt", "w");
	if(NULL == fp)
	{
		printf("\nCan't Open File");
		return -1;
	}
	
	while(chChar == 'Y' || chChar == 'y')
	{
		chTemp = '\t';
		chChar = '\n';
		printf("\nEnter Name, Roll No. & Percentage Respectively : ");
		scanf("%s%d%f", sObj.szName, &sObj.iRollNo, &sObj.fPercent);
		fprintf(fp, "%s%c%d%c%f%c", sObj.szName, chTemp, sObj.iRollNo, chTemp, sObj.fPercent, chChar);
		
		printf("\nDo You Want To Enter More Students Records [y/n] : ");
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
		
	Enter Name, Roll No. & Percentage Respectively : Prathamesh 70 92.40

	Do You Want To Enter More Students Records [y/n] : y

	Enter Name, Roll No. & Percentage Respectively : Nihar 69 96.40

	Do You Want To Enter More Students Records [y/n] : n
*/
