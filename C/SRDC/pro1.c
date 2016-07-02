#include <stdio.h>

int main(void){
    int x,y;
    printf("二つの整数を入力してください\n");
    printf("x: "); scanf("%d",&x);
    printf("y: "); scanf("%d",&y);
    if(x > y){
        printf("x: %d がy: %dより大きい\n",x,y);
    } else if(y > x){
        printf("y: %d がx: %dより大きい\n",y,x);
    } else {
        printf("xとyは等しい\n");
    } 
}