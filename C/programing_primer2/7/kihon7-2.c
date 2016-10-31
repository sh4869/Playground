#include <stdio.h>

void copyArray(int *from,int *to,int size){
  int i;
  for(i =0;i<size;i++){
    to[i] = from[i];
  }
}

int main(void){
  int i,j;
  printf("配列の長さを指定してください:");
  scanf("%d",&i);
  int a[i],b[i];
  for(j=0;j<i;j++){
    printf("配列a[%d]の値を整数で入力してください:",j);
    scanf("%d",&a[j]);
  }
  copyArray(a,b,i);
  for(j=0;j<i;j++){
    printf("b[%d] = %d\n",j,b[j]);
  }
  return 0;
}
