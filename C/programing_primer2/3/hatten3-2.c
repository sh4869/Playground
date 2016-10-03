#include <stdio.h>

int main(void){
    int x,y,count = 0,divider = 1,rest;
    printf("正の整数を入力してください:");
    scanf("%d",&x);
    y = x;
    while(y > divider){
        divider *= 10;
        rest = x % divider / (divider / 10);
        printf("%dの位は%dです．\n",divider / 10,rest);
        x = x - rest;
        count+=1;
    } 
    printf("%dは%d桁の値です．\n",y,count);
}