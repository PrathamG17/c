int main(void)
{
	 int iNo = 10;
	 int const *const pPtr = &iNo;
	 
	 ++iNo;		//allowed  as iNo is Non-Constant
	 
	 ++*pPtr;	//[(8) : error C2166: l-value specifies const object]  
				//(as pPtr is pointing to constant as per its definition(i.e. pointer's definition)
	 
	 ++pPtr;	//[(11) : error C2166: l-value specifies const object] as pPtr is Constant
	 
	 return 0;
}
