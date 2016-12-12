#include <stdio.h>

double innerProd(double *a,double *b,int size){
  int i;
  double sum = 0;
  for(i=0;i<size;i++){
    sum += a[i] * b[i];
  }
  return sum;
}

int main(void){
  int i,j;
  printf("配列の長さを指定してください:");
  scanf("%d",&i);
  double a[i],b[i];
  for(j=0;j<i;j++){
    printf("a[%d] =",j);
    scanf("%lf",&a[j]);
  }
  for(j=0;j<i;j++){
    printf("b[%d] =",j);
    scanf("%lf",&b[j]);
  }
  printf("aとbの内積は%fです\n",innerProd(a,b,i));
  return 0;
}
