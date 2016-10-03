#include <stdio.h>

int main(void){
    int x,i = 2;
    printf("正の整数を入力してください:");
    scanf("%d",&x);
    if(x == 1){
        printf("%dは素数ではありません\n",x);
        return 0;
    }
    while(i < x){
        if(x % i == 0){
            printf("%dは素数ではありません．\n",x);
            return 0;
        }
        i++;
    }
    printf("%dは素数です．\n",x);
}