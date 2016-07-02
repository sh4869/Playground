#include <stdio.h>

int main(void){
    int score,i,total = 0,num;
    printf("何人分の平均点を計算しますか?\n");
    scanf("%d",&num);
    printf("%d人分の点数を入力してください\n",num);
    for(i=0;i<num;i++){
        printf("%d人目の点数: ",i + 1);
        scanf("%d",&score);
        total += score;
    }
    printf("平均点: %f",(double)total / (double)num);
}