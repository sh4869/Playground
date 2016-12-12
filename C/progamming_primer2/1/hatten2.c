#include <stdio.h>

int main(void){
    int year;
    printf("西暦(1852年以降)を入力してください．:");
    scanf("%d",&year);
    if(year % 400 == 0){
        printf("%d年は閏年です\n",year);
    } else if(year % 100 == 0){
        printf("%d年は閏年ではありません\n",year);
    } else if(year % 4 == 0){
        printf("%d年は閏年です．\n",year);
    } else {
        printf("%d年は閏年ではありません\n",year);
    }
}