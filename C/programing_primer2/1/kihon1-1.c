#include <stdio.h>

int main(void){
    int x;
    printf("金額を入力してください:");
    scanf("%d",&x);
    printf("消費税を含めた金額は%d円です\n",(int)(x*1.08));
    return 0;
}