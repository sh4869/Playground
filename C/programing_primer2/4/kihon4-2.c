#include <stdio.h>

int main(void) {
  int standard = 60;
  int score[5] = {0};
  int is_bigger[5] = {0};
  int i;
  printf("5人分の点数を入力してください\n");
  for(i=0;i<5;i++){
    printf("%d人目:",i+1);
    scanf("%d",&score[i]);
    if(score[i] >= standard) is_bigger[i] = 1;
  }
  printf("%d点以上:",standard);
  for(i=0;i<5;i++){
    if(is_bigger[i] == 1) {
      printf(" %d",score[i]);
    }
  }
  printf("\n");

  printf("%d点未満:",standard);
  for(i=0;i<5;i++){
    if(is_bigger[i] == 0){
      printf(" %d",score[i]);
    }
  }
  printf("\n");
}

