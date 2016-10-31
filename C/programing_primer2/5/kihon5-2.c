#include  <stdio.h>

double bmi(double height,double weight){
  double height_m = height / 100;
  return weight / (height_m * height_m);
}

int main(void){
  double height,weight;
  printf("身長(cm):");
  scanf("%lf",&height);
  printf("体重(kg):");
  scanf("%lf",&weight);
  printf("BMIは%fです\n",bmi(height,weight));
}

