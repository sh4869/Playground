#include <stdio.h>
#include <stdlib.h>
#define NUM 1000000	//生成数
#define M (RAND_MAX+1.0)
#define N 1000
#define L 12

int main(int argc, char *argv[]){
	FILE *fp1, *fp2;
	int i, j;
	unsigned int x[NUM], y[NUM],
				 hist_x[N], hist_n[N], n[NUM/L];

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

	// 0～N-1までの一様乱数生成
	srand(1);
	for(i=0; i<NUM; i++)	x[i]=rand()/M*N;
	for(i=0; i<NUM; i++)	y[i]=rand()/M*N ;
	for(i=0; i<NUM; i++)
		fprintf(fp1, "%d %u %u\n",
				i, x[i], y[i]);
	// File Close
	fclose(fp1);

	// 0～N-1までの正規乱数生成
	for(i=0; i<NUM/L; i++) n[i]=0;
	for(i=0; i<NUM/L; i++)
		for(j=0; j<L; j++) n[i] += rand() /M*N;

	// ヒストグラム作成
	for(i=0; i<N; i++) hist_x[i]=hist_n[i]=0;
	for(i=0; i<NUM; i++) hist_x[x[i]]++;
	for(i=0; i<NUM/L; i++) hist_n[n[i]/L]++;
	for(i=0; i<N; i++)
		fprintf(fp2, "%d %u %u\n",
				i, hist_x[i], hist_n[i]);
	// File Close
	fclose(fp2);

	return 0;
}


