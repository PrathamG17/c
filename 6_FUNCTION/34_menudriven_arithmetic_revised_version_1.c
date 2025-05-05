#include <stdio.h>

int Modulus(int,int);
int Addition(int,int);
int Division(int,int);
int Subtraction(int,int);
int Multiplication(int,int);

int main(void)
{
	int iNo1;
	int iNo2;
	int iAns;
	int iChoice;
	
	while(1)
	{
		printf("\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Modulus\n6.Exit\n");
		printf("\nEnter Choice :");								//5		6
		scanf("%d",&iChoice);
		
		if(0 >=iChoice || 6 < iChoice)
		{
			printf("\nInvalid Choice\n");
			continue;
		}
		
		if(6 == iChoice)
			break;
		
		printf("\nEnter Two Numbers :\t");						//20 3
		scanf("%d%d",&iNo1,&iNo2);
		
		switch(iChoice)
		{
			case 1 : iAns = Addition(iNo1,iNo2);
					 break;
			
			case 2 : iAns = Subtraction(iNo1,iNo2);
					 break;
			
			case 3 : iAns = Multiplication(iNo1,iNo2);
					 break;
					 
			case 4 : iAns = Division(iNo1,iNo2);
			         break;
					 
			case 5 : iAns = Modulus(iNo1,iNo2);		 
		}
		
		printf("\nResult is %d.\n",iAns);						//2
	}

	return 0;
}

int Modulus(int iNo1,int iNo2)
{
	return iNo1 % iNo2;
}

int Addition(int iNo1,int iNo2)
{
	return iNo1 + iNo2;
}

int Division(int iNo1,int iNo2)
{
	return iNo1 / iNo2;
}
int Subtraction(int iNo1,int iNo2)
{
	return iNo1 - iNo2;
}

int Multiplication(int iNo1,int iNo2)
{
	return iNo1 * iNo2;
}
