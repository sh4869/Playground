#include <stdio.h>
#include <stdlib.h>
#define NUM 10000	//生成数
#define M (RAND_MAX+1.0)
#define N 1000

int main(int argc, char *argv[]){
	FILE *fp1, *fp2;
	int i;
	unsigned int x[NUM], y[NUM];

	// Usage

	if(argc != 3){
		fprintf( stderr ,
				"Usage: ./a.out \n");
		exit(1);
	}
	// File Open
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

	// 0～N-1までの乱数生成
		// 方法１ modを利用
	srand(1);
	for(i=0; i<NUM; i++) x[i]= rand() % N;
	for(i=0; i<NUM; i++) y[i]= rand() % N;
	for(i=0; i<NUM; i++)
		fprintf(fp1, "%d %u %u\n", i, x[i], y[i]);
	// File Close
	fclose(fp1);

	// 0～N-1までの乱数生成
		// 方法２ 最大値で割ってN倍
	srand(1);
	for(i=0; i<NUM; i++)	x[i]= rand() / M * N;
	for(i=0; i<NUM; i++)	y[i]= rand() / M * N;
	for(i=0; i<NUM; i++)
		fprintf(fp2, "%d %u %u\n",
						i, x[i], y[i]);
	// File Close
	fclose(fp2);

	return 0;
}
