//일반적인 나눗셈 (즉, 결과가 실수로 나오는..)을 수행하는 프로그램이다.
//모든 input에 대해 동작하지 않는다.
//모든 input에 대해 동작할 수 있도록 디버깅하시오!

#include <stdio.h>

double div(int num1, int num2);

int main()
{
	int x = 10, y = 0, a = 20;
	double result1 = 0.0, result2 = 0.0;
	
	result1 = div(x, y);
	result2 = div(x, a);
	
	printf("%d / %d = %.2lf\n", x, y, result1);
	printf("%d / %d = %.2lf\n", x, a, result2);
	
	return 0;
}

double div(int num1, int num2)
{
	return num1 / num2; 
}