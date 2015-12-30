#include <stdio.h>
#include <stdlib.h>
#define NUM  10000 	//生成数
#define A 11 
#define C 3
#define M 1000 

unsigned int lcgs(unsigned int x){
	unsigned int y;
	y= (A * x + C) % M   ;
	return y;
}

int main(int argc, char *argv[]){
	FILE *fp1;
	int i;
	unsigned int x, y;

	//Usage
	if(argc != 2){
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

	x=0; y=1;
	for(i=0; i<NUM; i++){
		x=lcgs(x);
		y=lcgs(y);
		fprintf(fp1, "%d %u %u\n", i, x, y);
	}
	// File Close

	return 0;
}
//
