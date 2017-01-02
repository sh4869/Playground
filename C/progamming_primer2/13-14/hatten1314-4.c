#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "mt19937ar.h"

typedef struct {
  double x;
  double y;
} point;

void generate_points(point *p,int n){
  int i = 0;
  for(i = 0;i<n;i++){
    (p+i)->x = genrand_real2();
    (p+i)->y = genrand_real2();
  }
}

double calc_approximation(point *p,int n){
  int x=0,i;
  for(i = 0;i < n;i++){
    if(sqrt(((p+i)->x * (p+i)->x)+((p+i)->y * (p+i)->y)) <= 1){
      x++;
    }
  }
  return ((double)x / (double)n)*4.0;
}

int main(void){
  int n;
  point * p;
  printf("点の生成回数を入力してください\n");
  scanf("%d",&n);
  p = calloc(n,sizeof(point));
  if(p == NULL){
    printf("記憶領域の確保に失敗しました\n");
    return -1;
  } else {
    generate_points(p,n);
    
    printf("演習率の近似値は%fです\n",calc_approximation(p,n));
  }
}
