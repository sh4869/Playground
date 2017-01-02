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
  int start,end;
  printf("積分範囲を指定してもらいます\n");
  printf("start:");
  scanf("%d",&start);
  printf("end:");
  scanf("%d",&end);
  printf("100の場合:");
  printf("%f\n",divisionmensuration(100,start,end));
  printf("1000の場合:");
  printf("%f\n",divisionmensuration(1000,start,end));
  printf("10000の場合:");
  printf("%f\n",divisionmensuration(10000,start,end));
  return 0;
}
