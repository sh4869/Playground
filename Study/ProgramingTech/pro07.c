#include <stdio.h>
#include <stdlib.h>
#define N 100
int main(int argc, char * argv[]){
			//コマンドライン引数利用
	FILE *fp1, *fp2, *fp3;
			//ファイルポインタを３つ宣言
	int i, data[N];
	// Usage
	if(argc != 4){
		fprintf(stderr,
			 "Usage: ./a.out file1 file2 file3\n");
		exit(1);		//使い方の提示と強制終了
	}
	if((fp1=fopen(argv[1], "r"))==NULL){
			//ファイルオープン（読み込み専用）
		fprintf(stderr, "File open error 1\n");
		exit(1);		//開けない場合のエラー処理
	}
	for(i=0; i<N; i++)
		fscanf(fp1, "%d", &data[i]);//ファイル入力
	fclose(fp1);		//ファイルクローズ
	if((fp2=fopen(argv[2], "w"))==NULL){
			//ファイルオープン（書き出し専用）
		fprintf(stderr, "File open error 2\n");
		exit(1);
	}
	if((fp3=fopen(argv[3], "w"))==NULL){
		fprintf(stderr, "File open error 3\n");
		exit(1);
	}
	for(i=0; i<N; i++){
		fprintf(fp2, "%d %d\n", i, data[i]*2);
		fprintf(fp3, "%d %d %d\n",
			 i, data[i]*2, data[i]*data[i]);
			//ファイル出力
	}
	fclose(fp2);	fclose(fp3);
	return 0;
}
