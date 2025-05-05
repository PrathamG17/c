#include <stdio.h>

int main(void)
{	
	printf("\n1-->\f");									//1-->
	printf("2-->NAMASKAR PRANAAM\t");					//2-->NAMASKAR PRANAAM    _(underscore indicate caret)
	printf("3-->\a");									//3-->(beep)
	printf("4-->\b");									//4-->(caret is at second angular bracket i.e. 4--(>))
	printf("5-->\r");									//5-->(caret return to start of this current line i.e. at 2 of (2--))
	printf("6-->\t\t\t\t");								//6-->(moving further with  escaping 28 character on a current line.)
	printf("7-->HELLO");								//7-->HELLO
	printf("8-->\v");									//8-->
	printf("9-->'    \'   \"  ?   \\");					//9-->'    '   "  ?   \												
	printf("\n10-->\0");								//10-->
	
	return 0;
}
