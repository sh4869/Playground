#include <stdio.h>

int main(void){
    int a,b,r,input1,input2;
    int min,max;
    printf("一つ目の整数を入力してください:");
    scanf("%d",&a);
    printf("二つ目の整数を入力してください:");
    scanf("%d",&b);
    input1 = a;
    input2 = b;
    if(b > a){
        a = a + b;
        b = a - b;
        a = a - b;
    }
    r = a % b;
    while(r > 0){
        a = b;
        b = r;
        r = a % b;
    }
    printf("%d,%dの最小公倍数は%dである．\n",input1,input2,b * (input1 / b) * (input2 / b));
    return 0;
    
}