#include <stdio.h>

int main(void)
{
	printf("\nint = %d.\n",sizeof(int));							//4						
	printf("short int = %d.\n",sizeof(short int));					//2
	printf("long int = %d.\n",sizeof(long int));					//4
	printf("long long int = %d.\n\n",sizeof(long long int));		//8

	printf("char = %d.\n",sizeof(char));							//1
	// printf("short char = %d.\n",sizeof(short char));				//:error C2632:'short' followed by 'char' is illegal 
	// printf("long char = %d.\n",sizeof(long char));				//:error C2632:'long' followed by 'char' is illegal
	// printf("long long char = %d.\n\n",sizeof(long long char));	//:error C2632:'__int64' followed by 'char' is illegal

	printf("\nfloat = %d.\n",sizeof(float));						//4
	//printf("short float = %d.\n",sizeof(short float));			//:error C2632:'short' followed by 'float' is illegal
	printf("long float = %d.\n",sizeof(long float));				//8
	//printf("long long float = %d.\n\n",sizeof(long long float));	//:error C2632:'__int64' followed by 'float' is illegal

	printf("\ndouble = %d.\n",sizeof(double));						//8
	//printf("short double = %d.\n",sizeof(short double));			//:error C2632:'short' followed by 'double' is illegal
	printf("long double = %d.\n",sizeof(long double));				//8
	//printf("long long double = %d.\n",sizeof(long long double));	//:error C2632:'__int64' followed by 'double' is illegal
	
	return 0;
}
