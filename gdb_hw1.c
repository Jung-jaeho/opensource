//진행 상황을 %로 계산해서 출력하는 코드입니다.
//%가 정상적으로 출력되지 않는 코드입니다.

#include <stdio.h>
#define MAX 1024

int eval(int cur);

int main()
{
    int cnt = 0;
    int pcnt = 0;

	while (cnt <= MAX)
	{
		pcnt = eval(cnt);
		printf("%d:%d | %d%%\n", cnt, MAX, pcnt);
		fflush(stdout);
		cnt += 30;
		sleep(1);
	}
	return 0;
}

int eval(int cur)
{
	int per = 0;
	
	printf("%d ... \n", cur);
	per = cur / MAX * 100;
	
	return per;
}