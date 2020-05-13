//아래 프로그램은 동작하지 않는다. 디버깅하시오~!

#include <stdio.h>
#include <string.h>

int main()
{
	char *str = NULL;
	
	strcpy(str, "Hello world!");
	
	printf("%s\n", str);
	
	return 0;
}
