int main(void)
{
	 int iNo = 10;
	 int *const pPtr = &iNo;
	 
	 ++iNo;		//allowed  as iNo is Non-Constant
	 
	 ++*pPtr;	//allowed  as pPtr is pointing to Non constant as per its definition(i.e. pointer's definition)
	 
	 ++pPtr;	//[(10) : error C2166: l-value specifies const object] as pPtr is Constant
	 
	 return 0;
}