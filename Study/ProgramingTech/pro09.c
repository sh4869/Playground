#include <stdio.h>
#include <stdlib.h>
#define NUM  10000 	//生成数
#define A 11 
#define C 3
#define M 1000 
#define N 100 

unsigned int lcgs(unsigned int x){
	unsigned int y;
	y= (A * x + C) % M   ;
	return y;
}

int main(int argc, char *argv[]){
	FILE *fp1,*fp2;
	int i;
	unsigned int x, y;
	double x2,y2;
	//Usage
	if(argc != 3){
		fprintf( stderr ,
				"Usage: ./a.out \n");
		exit(1);
	}

	//File Open
	if((fp1=fopen(argv[1], "w"))==NULL){
		//ファイルオープン（読み込み専用）
		fprintf(stderr, "File open error 1\n");
		exit(1);		//開けない場合のエラー処理
	}
	if((fp2=fopen(argv[2], "w"))==NULL){
		//ファイルオープン（読み込み専用）
		fprintf(stderr, "File open error 1\n");
		exit(1);		//開けない場合のエラー処理
	}

	for(i=0; i<NUM; i++){
		// 方法１ modを利用
		x=lcgs(x) % N;
		y=lcgs(y) % N;
		fprintf(fp1, "%d %u %u\n", i, x, y);
	}
	// File Close
	fclose(fp1);

	// 0～N-1までの乱数生成
	x2=0; y2=1;
	for(i=0; i<NUM; i++){
		// 方法２ 最大値で割ってN倍
		x2=lcgs((int)x2);
		x=(int)(x2 / M * N);
		y2=lcgs((int)y2);
		y=(int)(y2 / M * N);
		fprintf(fp2, "%d %u %u\n", i, x, y);
	}
	// File Close

	return 0;
}
//
