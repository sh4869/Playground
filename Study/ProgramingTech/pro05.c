// pro05.c
#include <stdio.h>
#define N 100		// 後で 128 でも試してみよ

int main(void)
{
	double x, sum;
	int i;
	sum=0.0;
	x=1.0/N;
	for (i=0; i<N; i++)
		sum+=x;
	if(sum==1.0)
		printf("合計は１になりました。\n");
	else
		printf("合計は１になりませんでした。\n");
	return 0;
}
