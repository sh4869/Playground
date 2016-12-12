#include <stdio.h>

int main(void){
    int x;
    printf("月を入力してください:");
    scanf("%d",&x);
    if(x >= 9 && x <= 11){
        printf("%d月は秋です．\n",x);
    } else {
        printf("%d月は秋ではありません．\n",x);
    }
    return 0;
}