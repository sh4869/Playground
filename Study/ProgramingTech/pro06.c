#include <stdio.h>

float sum1(int n, float a)	// 通常の方法
{
	int i;
	float s;

	s=1;
	for(i=0; i<n; i++) s+=a;
	return s;
}

float sum2(int n, float a)	// 　情報落ち　対策
{
	int i;
	float r, s, t;

	r=1; s=0;		// これ以下のからくりを暴け
	for(i=0; i<n; i++){
		r = r + a; 		//積み残し + 加えたい値
		t = s; 			// 前回までの和
		s = s + r; 		//和を更新
		t = -(s - t); 	//実際に積まれた値の符号を変えたもの
		r = r + t; 		//積み残し
	}
	return s;
}

int main(void)
{
	int n;
	float a;

	n=100000000;
	a=1.0/n;
	printf("1 に1/%d を%d回足し算する\n", n, n);
	printf("方法1: %.6f\n", sum1(n, a));
	printf("方法2: %.6f\n", sum2(n, a));
	return 0;
}
