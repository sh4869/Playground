#include <stdio.h>

double  circumference(double radius){
  return 2 * radius * 3.14;
}

int main(void){
  double rad;
  printf("円の半径を入力:");
  scanf("%lf",&rad);
  printf("演習は%fです．\n",circumference(rad));
  return 0;
}

