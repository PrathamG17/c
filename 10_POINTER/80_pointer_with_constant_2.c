int main(void)
{
	 int iNo = 10;
	 const int *pPtr = &iNo;
	 
	 iNo++;		//allowed as iNo is Non-Costant
	 
	++*pPtr;	//[(8) : error C2166: l-value specifies const object] (as pPtr pointing to Constant ) 
	
	 ++pPtr;	//allowed as pPtr is Non-Constant
	 
	 return 0;
}
 