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
	
	do
	{
		
		printf("\n\t\t**********MENU**********\n\t\t1.Addition\n\t\t2.Subtraction\n\t\t3.Nultiplication\n\t\t4.Division\n\t\t5.Modulus\n\t\t6.Exit");
		printf("\n\n\t\tEnter Choice : ");			//4
		scanf("%d",&iChoice);
		
		if(0 >= iChoice || 6  < iChoice)
		{
			printf("\n\n\t\tInvalid Choice\n");
			continue;
		}
		else if(6 != iChoice)
		{
			printf("\n\n\t\tEnter Two Numbers : ");		//15 5
			scanf("%d%d",&iNo1,&iNo2);
		}
		
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
		
		if(6 > iChoice && iChoice > 0)
			printf("\n\n\t\tAnswer is %d",iAns);			//3

	}while(6 != iChoice);
	
	/* while(1)
	{
		printf("\n\t\t**********MENU**********\n\t\t1.Addition\n\t\t2.Subtraction\n\t\t3.Nultiplication\n\t\t4.Division\n\t\t5.Modulus\n\t\t6.Exit");
		printf("\n\n\t\tEnter Choice : ");			//4
		scanf("%d",&iChoice);

		if(6 == iChoice)
			break;
		
		if(0 >= iChoice || 6  < iChoice)
		{
			printf("\n\n\t\tInvalid Choice");
			continue;
		}
		
		printf("\n\n\t\tEnter Two Numbers : ");		//15 5
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
		
		printf("\n\n\t\tAnswer is %d",iAns);			//3

	} */
	
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
