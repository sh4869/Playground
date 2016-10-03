#include <stdio.h>

int main(void){
    int x;
    int sum = 0;
    int flag = 1;
    while(flag){
        printf("整数を入力してください:");
        scanf("%d",&x);
        if(x < 0){
            flag = 0;
        } else {
            sum = sum + x;
        }
    }
    printf("合計は%dです．\n",sum);
    return 0;
}