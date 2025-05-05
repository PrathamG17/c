void Division(void)
{
	int iNumerator;
	int iDenominator;
	int iQuotient;
	
	printf("\nFor Division Operation...\nEnter Numerator : \t");
	scanf("%d",&iNumerator);
	printf("\nEnetr Denominator : \t");
	scanf("%d",&iDenominator);
	
	iQuotient = iNumerator / iDenominator;
	printf("\nQuotient is.. %d.\n",iQuotient);
}
