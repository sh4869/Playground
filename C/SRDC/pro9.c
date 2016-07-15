#include <stdio.h>
int calcSum(int max);

int main(void){
    int max;
    printf("整数を入力してください.\n");
    scanf("%d",&max);
    printf("1から%dまでの総和は%dです.\n",max,calcSum(max));
    return 0;
}

int calcSum(int max){
    int x = 0,i;
    for(i=1;i<=max;i++){
        x += i;
    }
    return x;
}