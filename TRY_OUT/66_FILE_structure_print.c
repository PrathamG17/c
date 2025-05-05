#include <stdio.h>

int main(void)
{
	FILE *fp = NULL;
	
	fp = fopen("D:\\PRATHAMESH\\C_PROGRAMMING_LANGUAGE\\20_FILE_HANDLING_THROUGH_C\\152_print_characters.txt", "r");
	if(NULL == fp)
	{
		printf("\nCan't Open File");
		return -1;
	}

	printf("\nContents of Object Created By fopen function..\n");
	printf("\nfp->_ptr : %s", fp->_ptr);
	printf("\nfp->_file : %d", fp->_file);
	printf("\nfp->_cnt : %d", fp->_cnt);
	printf("\nfp->_base : %s", fp->_base);
	printf("\nfp->_flag : %d", fp->_flag);
	printf("\nfp->_charbuf : %d", fp->_charbuf);
	printf("\nfp->_bufsiz : %d", fp->_bufsiz);
	printf("\nfp->_tmpfname : %s", fp->_tmpfname);
	
	return 0;
}
/* 
  char *_ptr;
        int   _cnt;
        char *_base;
        int   _flag;
        int   _file;
        int   _charbuf;
        int   _bufsiz;
        char *_tmpfname;
}; */
