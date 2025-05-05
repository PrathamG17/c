#include <stdio.h>

int main(void)
{
	int iNo1 = 65;
	int iNo2 = 'A';
	
	char chAns;
	char chChar1 = 'A';
	char chChar2 = 65;
	char chChar3 = '!';												//33
	char chChar4 = '"';												//34
	
	printf("\nchChar1 = %d.\n",chChar1);							//65
	printf("chChar1 = %c.\n",chChar1);								//A
	printf("chChar2 = %d.\n",chChar2);								//65
	printf("chChar2 = %c.\n\n",chChar2);							//A
	
	printf("iNo1 = %d.\n",iNo1);									//65
	printf("iNo1 = %c.\n",iNo1);									//A
	printf("iNo2 = %d.\n",iNo2);									//65
	printf("iNo2 = %c.\n\n",iNo2);									//A
	
	chAns = chChar3 + chChar4;										//C => 67
	
	printf("chChar3 = %c & chChar3 = %d.\n",chChar3,chChar3);		//! 	33
	printf("chChar4 = %c & chChar4 = %d.\n",chChar4,chChar4);		//"		34
	printf("chAns = %c & chAns = %d.\n",chAns,chAns);				//C		67
	
	return 0;
}
