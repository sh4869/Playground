#include <stdio.h>

int main(void){
  int input[2][2] = {{0,0},{0,0}};
  int b_ans[2][2] = {{0,0},{0,0}};
  int ans[2][2] = {{0,0},{0,0}};
  int i,j,k;
  int count = 0;
  printf("行列aを入力してください:\n");
  for(i=0;i<2;i++){
    for(j=0;j<2;j++){
      printf("a[%d][%d] = ",i,j);
      scanf("%d",&input[i][j]);
    }
  }
  printf("何乗しますか?\n");
  scanf("%d",&count);

  printf("行列aの%d乗は\n",count);
  if(count > 0){
    for(i=0;i<2;i++){
      for(j=0;j<2;j++){
        ans[i][j] = input[i][j];
        b_ans[i][j] = input[i][j];
      }
    }
  }
  count-=1;
  while(count > 0){
    for(i=0;i<2;i++){
      for(j=0;j<2;j++){
        b_ans[i][j] = ans[i][j];
        ans[i][j] = 0;
      }
    }
    for(i=0;i<2;i++){
      for(j=0;j<2;j++){
        for(k=0;k<2;k++){
          ans[j][k] += b_ans[j][i] * input[i][k];
        }
      }
    }
    count--;
  }
  for(i=0;i<2;i++){
    for(j=0;j<2;j++){
      printf("ans[%d][%d] = %d\n",i,j,ans[i][j]);
    }
  }
  printf("です．\n");
  return 0;
}
