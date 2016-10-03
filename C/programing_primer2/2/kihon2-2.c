#include <stdio.h>

int main(void){
    int x,i = 1;
    printf("正の整数を入力してください:");
    scanf("%d",&x);
    printf("%dの約数を小さい順に列挙すると\n",x);
    while(i < x){
        if(x % i == 0){
            printf("%d,",i);
        }
        i++;
    }
    printf("%d である．",x);
    return 0;
}