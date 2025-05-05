int main(void)
{
	 int iNo = 10;
	 int *pPtr = &iNo;
	 
	 ++iNo;		//allowed  as iNo is Non-Constant
	 
	 ++*pPtr;	//allowed  as pPtr is pointing to Non constant as per its definition(i.e. pointer's definition)
	 
	 ++pPtr;	//allowed as pPtr is Non-Constant
	 
	 return 0;
}