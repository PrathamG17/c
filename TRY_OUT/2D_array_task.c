#include <stdio.h>
#define MAX 50

int main(void)
{
	int iLimit;
	int iLimit1;
	int iNo = 0;
	int iTemp = 0;
	int iCounter1;
	int iCounter2;
	int arr[MAX][MAX] = {0};
	
	printf("\nEnter No. : ");
	scanf("%d",&iLimit);
	
	iLimit1 = iLimit;
	
	while(iLimit != 0)
	{
		for(iCounter1 = iTemp, iCounter2 = iCounter1; iCounter2 < iLimit; iCounter2++)
		{
			arr[iCounter1][iCounter2] = ++iNo;
			if(iCounter2 == iLimit-1)
				break;
		}
		
		if(iNo == (iNo * iNo))
			break;
		
		for(iCounter1++; iCounter1 < iLimit; iCounter1++)
		{
			arr[iCounter1][iCounter2] = ++iNo;
			if(iCounter1 == iLimit-1)
				break;
		}
		
		for(iCounter2--; iCounter2 >= iTemp; iCounter2--)
		{
			arr[iCounter1][iCounter2] = ++iNo;
			if(iCounter2 == iTemp)
				break;
		}
		
		iTemp++;
		for(iCounter1--; iCounter1 >= iTemp; iCounter1--)
		{
			arr[iCounter1][iCounter2] = ++iNo;
			if(iCounter1 == iTemp)
				break;
		}
		
		iLimit--;
	}
	
	for(iCounter1 = 0; iCounter1 < iLimit1; iCounter1++)
	{
		for(iCounter2 = 0; iCounter2 < iLimit1; iCounter2++)
			printf("\t%d",arr[iCounter1][iCounter2]);
		
		printf("\n");
	}
	
	return 0;
}

/*
	o/p:
	
	Enter No. : 10
        1       2       3       4       5       6       7       8       9       10
        36      37      38      39      40      41      42      43      44      11
        35      64      65      66      67      68      69      70      45      12
        34      63      84      85      86      87      88      71      46      13
        33      62      83      96      97      98      89      72      47      14
        32      61      82      95      100     99      90      73      48      15
        31      60      81      94      93      92      91      74      49      16
        30      59      80      79      78      77      76      75      50      17
        29      58      57      56      55      54      53      52      51      18
        28      27      26      25      24      23      22      21      20      19
*/
