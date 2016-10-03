#include <stdio.h>

int main(void){
    int a,b,x,y,rest = 0,dive = 1,count = 0;
    printf("正の整数(割られる数)を入力してください:");
    scanf("%d",&a);
    x = a;
    printf("正の整数(割る数)を入力してください:");
    scanf("%d",&b);
    y = b;
    if(x > 0 && y > 0){
        while(1){
            rest = x % y;
            printf("%d",x / y);
            if(rest != 0){
                if(count == 0){
                    printf(".");
                }
                if(count < 50){
                    x = rest * 10;
                    count += 1;
                }
            } else {
                break;
            }
        }
    }
}