#include <stdio.h>

void sort(int *a,int size){
  int tmp,flag = 1,i;
  while(flag){
    flag=0;
    for(i = 0; i < size -1; i+= 2){
      if(a[i+1] > a[i]){
        tmp = a[i];
        a[i] = a[i+1];
        a[i+1] = tmp;
        flag = 1;
      }
    }
    for(i = 1; i < size - 1; i+= 2){
      if(a[i+1] > a[i]){
        tmp = a[i];
        a[i] = a[i+1];
        a[i+1] = tmp;
        flag = 1;
      }
    }
  }
}

int main (void){
  int i,j;
  printf("配列の長さを指定してください:");
  scanf("%d",&i);
  printf("長さ%dの配列を入力してください．\n",i);
  int a[i];
  for(j=0;j<i;j++){
    printf("a[%d] = ",j);
    scanf("%d",&a[j]);
  }
  sort(a,i);
  printf("ソート後:\n");
  for(j=0;j<i;j++){
    printf("a[%d] = %d\n",j,a[j]);
  }
}
