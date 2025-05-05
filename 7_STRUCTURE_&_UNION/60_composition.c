#include <stdio.h>
//Nested structure or union...can be written as follows...
struct inner
{
	int iNo;
	float fNo;
};

struct outer
{
	int iNo;
	float fNo;
	struct inner iObj;
}oObj;

int main(void)
{
	printf("\nSize of oObj = %d\n",sizeof(oObj));	//Size of oObj = 16

	return 0;
}
