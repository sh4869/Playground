#include <stdio.h>

double average(int *a,int size){
  int i,sum= 0;
  for(i=0;i<size;i++){
    sum += a[i];
  }
  return (double)sum/(double)size;
}

int main(void){
  int i,j;
  printf("配列の長さをしていしてください:");
  scanf("%d",&i);
  int a[i];
  for(j=0;j<i;j++){
    printf("a[%d] = ",j);
    scanf("%d",&a[j]);
  }
  printf("平均値は%fです．\n",average(a,i));
  return 0;
}
