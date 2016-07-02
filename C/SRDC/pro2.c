#include <stdio.h>

int main(void){
    int x;
    printf("整数を入力してください\n");
    printf("x: "); scanf("%d",&x);
    if(x % 2 == 0 || x % 3 == 0){
        printf("x: %dは2、または3の倍数です\n",x);
    } else {
        printf("2の倍数でも3の倍数でもないです\n");
    }
}