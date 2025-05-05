#include <stdio.h>

int Division(int ,int);
int Modulus(int ,int);
int Addition(int , int);
int Subtraction(int , int);
int Multiplication(int , int);

int main(void)
{
	int iNo1;
	int iNo2;
	int iAns;
	int iChoice;
	
	printf("\n1.Addition\n2.Subtraction\n3.Nultiplication\n4.Division\n5.Modulus");
	printf("\n\nEnter Choice : ");			//4
	scanf("%d",&iChoice);
	
	if(iChoice <= 0 || iChoice >= 6)
	{
		printf("\nInvalid Choice");
		return -1;
	}
	
	printf("\nEnter Two Numbers : ");		//15 5
	scanf("%d%d",&iNo1,&iNo2);
	
	switch(iChoice)
	{
		case 1 :
			iAns = Addition(iNo1 , iNo2);
			break;
		
		case 2 :
			iAns = Subtraction(iNo1 , iNo2);
			break;
		
		case 3 :
			iAns = Multiplication(iNo1 , iNo2);
			break;
		
		case 4 :
			iAns = Division(iNo1 , iNo2);
			break;
		
		case 5 :
			iAns = Modulus(iNo1 , iNo2);
	}
	
	printf("\nAnswer is %d",iAns);			//3
	
	return 0;
}

int Addition(int iNo1 , int iNo2)
{
	return iNo1 + iNo2;
}

int Subtraction(int iNo1 , int iNo2)
{
	return iNo1 - iNo2;
}

int Multiplication(int iNo1 ,int iNo2)
{
	return iNo1 * iNo2;
}

int Division(int iNo1 ,int iNo2)
{
	return iNo1 / iNo2;
}

int Modulus(int iNo1 ,int iNo2)
{
	return iNo1 % iNo2;
}
