int main(void)
{
	 const int iNo = 10;
	 const int *pPtr = &iNo;
	 
	 ++iNo;		//[(6) : error C2166: l-value specifies const object] (as iNo is Constant)
	 
	 ++*pPtr;	//[(8) : error C2166: l-value specifies const object]  
				//(as pPtr is pointing to constant as per its definition(i.e. pointer's definition))
	 
	 ++pPtr;	//allowed as pPtr is Non-Constant
	 
	 return 0;
}