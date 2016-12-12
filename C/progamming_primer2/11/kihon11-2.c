#include <stdio.h>

typedef enum {Circle ,Triangle} ct;

typedef union {
  double radius;
  struct {
    double base;
    double height;
  } tri;
} info;

int main(void){
  info x;
  ct y;
  printf("円か三角形かを選択(円0,三角形1):");
  scanf("%d",&y);
  if(y == Circle){
    printf("半径:");
    scanf("%lf",&x.radius);
    printf("円の半径は%fです。\n",x.radius);
  } else if(y == Triangle){
    printf("底辺:");
    scanf("%lf",&x.tri.base);
    printf("高さ:");
    scanf("%lf",&x.tri.height);
    printf("三角形の底辺は%f,高さは%fです。\n",x.tri.base,x.tri.height);
  }
  return 0;
}
