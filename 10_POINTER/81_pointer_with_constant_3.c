int main(void)
{
	 const int iNo = 10;
	 int *pPtr = &iNo;
	 
	 ++iNo;		//[(6) : error C2166: l-value specifies const object] (as iNo is Constant)
	 
	 ++*pPtr;	//allowed  as pPtr is pointing to Non constant as per its definition(i.e. pointer's definition)
	 
	 ++pPtr;	//allowed as pPtr is Non-Constant
	 
	 return 0;
}