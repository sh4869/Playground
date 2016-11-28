#include <stdio.h>
#include <stdlib.h>

double average (int *p,int n){
  int i;
  double sum=0;
  for(i = 0;i<n;i++){
    sum+=p[i];
  }
  return sum / n;
}

int main(void){
  int n,i;
  int *p;
  printf("何人分入力しますか:");
  scanf("%d",&n);
  p = calloc(n,sizeof(int));
  if(p == NULL){
    printf("記憶領域の確保に失敗しました\n");
    return -1;
  }else{
    for(i=0;i<n;i++){
      printf("%d人目の点数を入力:",i+1);
      scanf("%d",&p[i]);
    }
    printf("平均点は%f点です．\n",average(p,n));
  }

  free(p);
  return 0;
}
