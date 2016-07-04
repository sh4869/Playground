#include <stdio.h>

int main(void){
    double sum;
    int i = 0,x;
    printf("整数を入力してください.負の数を入力すると終了します.\n");
    scanf("%d",&x);
    while(x >= 0){
        sum += x;
        i++;
        scanf("%d",&x);    
    }
    printf("平均は%fです\n",sum / i);
}