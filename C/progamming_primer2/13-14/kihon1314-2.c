#include <stdio.h>
#include <math.h>
#include <string.h>

typedef struct {
  char name[30];
  int score;
  double dev_value;
} data;

void ReadDatas(FILE **fp, data * datas){
  char name[30];
  int score;
  int i= 0;
  while(fscanf(*fp,"%s%d",name,&score) == 2){
    strcpy(datas[i].name,name);
    datas[i].score = score;
    i++;
  }
}

void printDistributionGraph(data * datas,int length){
  int i,j,min=0,max=10,tmp;
  int score_min = datas[0].score;
  int score_max = datas[0].score;
  double sum = 0,squaring_sum = 0;
  int graph[10] = {0,0,0,0,0,0,0,0,0,0};
  for(i = 0;i<length;i++){
    if(datas[i].score == 0){
      graph[0]++;
    } else {
      graph[((datas[i].score - (datas[i].score % 10) + 10) /10) - 1 - (int)pow(0,datas[i].score % 10)]++;
    }
    if(score_min > datas[i].score){
      score_min = datas[i].score;
    }
    if(score_max < datas[i].score){
      score_max = datas[i].score;
    }
    sum += datas[i].score;
    squaring_sum += datas[i].score * datas[i].score;
  }
  for(i=0;i<10;i++){
    printf("%2d-%3d: ",min,max);
    for(j=0;j<graph[i];j++){
      printf("*");
    }
    printf("\n");
    tmp = min + 1;
    min = min + 11 - (((tmp + 1 )% tmp) * 1);
    max += 10;
  }
  double  deflection = sqrt((squaring_sum - (sum*sum/length))/length);
  printf("平均点: %f\n",sum / 100);
  printf("最高点: %d\n",score_max);
  printf("最低点: %d\n",score_min);
  printf("標準偏差: %f\n",deflection);
  for(i=0;i<length;i++){
    datas[i].dev_value = ((datas[i].score - sum/100)/deflection) * 10 + 50;
    printf("%f\n",datas[i].dev_value);
  }
}
int writingDevVal(data * datas,int length){
  FILE * fp2;
  char file_name[200];
  int i;
  printf("偏差値を書き出すファイル名を入力:");
  scanf("%s",file_name);
  fp2 = fopen(file_name,"w");
  for(i = 0;i<length;i++){
    fprintf(fp2,"%-6s %3d %2.2f\n",datas[i].name,datas[i].score,datas[i].dev_value);
  }
}


int main(void){
  FILE * fp;
  data datas[100];
  fp = fopen("score.txt","r");
  if(fp==NULL){
    printf("ファイルオープンに失敗しました。\n");
    return -1;
  }
  ReadDatas(&fp,datas);
  fclose(fp);
  printDistributionGraph(datas,100);
  writingDevVal(datas,100);
  return 0;
}
