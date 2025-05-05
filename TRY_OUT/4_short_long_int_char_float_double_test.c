#include <stdio.h>

int main(void)
{
	printf("\nint = %d.\n",sizeof(int));
	printf("short int = %d.\n",sizeof(short int));
	printf("long int = %d.\n",sizeof(long int));
	printf("long long int = %d.\n\n",sizeof(long long int));

	printf("char = %d.\n",sizeof(char));
//	printf("short char = %d.\n",sizeof(short char));				//error illegal
//	printf("long char = %d.\n",sizeof(long char));					//error illegal
//	printf("long long char = %d.\n\n",sizeof(long long char));		//error __int64

	printf("\nfloat = %d.\n",sizeof(float));
//	printf("short float = %d.\n",sizeof(short float));				//error illegal
	printf("long float = %d.\n",sizeof(long float));				//warning nonstandard extension
//	printf("long long float = %d.\n\n",sizeof(long long float));	//error __int64

	printf("\ndouble = %d.\n",sizeof(double));
//	printf("short double = %d.\n",sizeof(short double));			//error illegal
	printf("long double = %d.\n",sizeof(long double));
//	printf("long long double = %d.\n",sizeof(long long double));	//error __int64
	
	return 0;
}
