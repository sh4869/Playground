#include <stdio.h>

typedef enum {Circle ,Triangle} ct;
typedef struct {
  ct ct;
  union {
    double radius;
    struct {
      double base;
      double height;
    } tri;
  } info;
} fig;

double area(fig * fig) {
  if(fig->ct == Circle){
    printf("面積は%fです\n",fig->info.radius * fig->info.radius * 3.14);
  } else if(fig->ct == Triangle){
    printf("面積は%fです\n",fig->info.tri.base * fig->info.tri.height * 0.5);
  }
}
int main(void){
  fig x;
  ct y;
  printf("円か三角形かを選択(円0,三角形1):");
  scanf("%d",&y);
  x.ct = y;
  if(y == Circle){
    printf("半径:");
    scanf("%lf",&x.info.radius);
  } else if(y == Triangle){
    printf("底辺:");
    scanf("%lf",&x.info.tri.base);
    printf("高さ:");
    scanf("%lf",&x.info.tri.height);
  }
  area(&x);
  return 0;
}
