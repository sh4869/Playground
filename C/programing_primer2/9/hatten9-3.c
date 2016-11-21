#include <stdio.h>
#include <math.h>

typedef struct {
    double x;
    double y;
} point;

double area(point p1,point p2,point p3){
    point a = {p1.x - p2.x,p1.y - p2.y};
    point b = {p3.x - p2.x,p3.y - p2.y};
    return fabs(a.x*b.y - a.y*b.x)/2;
}

int main(void){
    point p[3];
    int i;
    for(i=0;i<3;i++){
        printf("%d番目の座標値\n",i+1);
        printf("x:");
        scanf("%lf",&p[i].x);
        printf("y:");
        scanf("%lf",&p[i].y);
    }
    for(i=0;i<3;i++) {
        printf("{%f,%f} ",p[i].x,p[i].y);
    }
    printf("から定義される三角形の面積は %f です\n",area(p[0],p[1],p[2]));
}