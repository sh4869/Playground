#include <stdio.h>

int main(void) {
  int score[5] = {0};
  int i,count = 0;
  printf("5人分の点数を入力してください\n");
  for(i=0;i<5;i++){
    printf("%d人目:",i+1);
    scanf("%d",&score[i]);
    if(score[i] >= 80) count+=1;
  }
  printf("80点以上の人は%d人です\n",count);
}
