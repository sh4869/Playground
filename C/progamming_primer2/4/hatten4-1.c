#include <stdio.h>

int main(void){
  int score[5] = {0};
  double sum=0,ave;
  int i;
  printf("5人分の点数を入力してください．\n");
  for(i = 0;i<5;i++){
    printf("%d人目:",i+1);
    scanf("%d",&score[i]);
    sum += score[i];
  }
  ave = sum / 5;
  printf("平均点:%f\n",ave);
  printf("平均点以上:");
  for(i=0;i<5;i++){
    if(score[i] >= ave) printf(" %d",score[i]);
  }
  printf("\n");
  
  printf("平均点以下:");
  for(i=0;i<5;i++){
    if(score[i] < ave) printf(" %d",score[i]);
  }
  printf("\n");
}


