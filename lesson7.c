#include <stdio.h>
#define HOW_MANY_TIMES_TO_SAY_HELLO 10000
int main(int argc, const char *argv[])
{	
	int i;
	for (i = 0; i < HOW_MANY_TIMES_TO_SAY_HELLO; i++) 
	{
		printf("hello world!\n");
	}
	return 0;
}  //宏定义用法
