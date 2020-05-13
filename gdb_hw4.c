//factorial 계산하는 프로그램이다. 정상동작하지 않음!

#include <stdio.h>
 
int fact(int n);
 
int main()
{
    int n;
	int re;
	
	scanf("%d", &n);    
    re = fact(n);	
	printf("%d\n", re);
 
    return 0;
}
 
int fact(int n)
{
    int result = 1;
	
    while(n--)
    {
		result *= n;
    }
	
    return result;
}