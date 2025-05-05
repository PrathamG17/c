#include <stdio.h>

int main(void)
{
	struct Student
	{
		char szName[25];
		int iRollNo;
		float fPercent;
	};
	
	FILE *fp = NULL;
	struct Student sObj;
	
	fp = fopen("158_structure_from_keyboard_to_file.txt", "r");
	if(NULL == fp)
	{
		printf("\nCan't Open File");
		return -1;
	}
	
	while(fscanf(fp, "%s%d%f", sObj.szName, &sObj.iRollNo, &sObj.fPercent) != EOF)
		printf("\n%s %d %f", sObj.szName, sObj.iRollNo, sObj.fPercent);				//Prathamesh 70 92.400002	Nihar 69 96.400002
	
	if(fp != NULL)
	{
		fclose(fp);
		fp = NULL;
	}
	
	return 0;
}
