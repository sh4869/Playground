#include <stdio.h>

int swp(int *a,int *b){
    if(*a > *b){
        int tmp = *b;
        *b = *a;
        *a = tmp;
    }
}

int main(void){
    int a,b,skip = 1;
    while(1){
        printf("数値を入力:");
        scanf("%d",&a);
        printf("数値を入力:");
        scanf("%d",&b);
        swp(&a,&b);
        if(!(b % a)){
            printf("%dは%dの約数です．\n",a,b);
        } else {
            printf("%dは%dの約数でありません\n",a,b);
        }
        printf("[続ける:1,終了:0]");
        scanf("%d",&skip);
        if(skip == 0){
          break;
        }
    }
}
