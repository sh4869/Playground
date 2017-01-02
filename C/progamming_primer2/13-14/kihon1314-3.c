#include <stdio.h>

double divisionmensuration(int num,int start,int end){
  int i;
  double sum=0;
  double x = end - start;
  double div = (double)x / (double)num;
  for(i = 0;i< num;i++){
    sum += div * (((double)start + (div * i)) * ((double)start + (div * i)));
  }
  return sum;
}

int main(void){
  printf("100の場合:");
  printf("%f\n",divisionmensuration(100,0,3));
  printf("1000の場合:");
  printf("%f\n",divisionmensuration(1000,0,3));
  printf("10000の場合:");
  printf("%f\n",divisionmensuration(10000,0,3));
  return 0;
}
