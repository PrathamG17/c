#include <stdio.h>

int main(void)
{
	int iAns;
	int iNo1 = 0;
	int iNo2 = 1;
	int iNo3 = 2;
	
	iAns = iNo1 && ++iNo2 || iNo3++;
	
	/*  iNo2 common operand for ++ and || operator => iNo2 bind with ++
		iNo3 common operand for || and ++ operator => iNo3 bind with ++
		i.e. 
		iAns = iNo1 && (++iNo2) || (iNo3++)
		iAns = ((iNo1 && (++iNo2)) || (iNo3++))
						-----[By Precedence]
						-----[&& cha pahila operand1 nahi mhanla hence operand2 check honar nahi]
		iAns = (0 || (iNo3++))  		
						-----(|| cha pahila operand ho mhanla nahi mhnun operand2 check jhala)
		iAns = 1
	*/
	
	printf("\niNo1 = %d",iNo1);		//0
	printf("\niNo2 = %d",iNo2);		//1
	printf("\niNo3 = %d",iNo3);		//3
	printf("\niAns = %d",iAns);		//1
	
	return 0;
}
