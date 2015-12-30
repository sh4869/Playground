// pro03.c
#include <stdio.h>
int collatz(int n){
    if(n == 1){
        return 1;
    }else if(n % 2 == 0){
        n = n / 2;
    }else{
        n = (n * 3) + 1;
    }
    printf("%d,",n);
    return collatz(n);
    /*
    while(n != 1){
        if(n % 2 == 0){
            n = n / 2;
        }else{
            n = (n * 3) + 1;
        }
        printf("%d,",n);
    }
    return 1;
    */
}

int main(void){
    int n;
    printf("自然数を入力: "); scanf("%d", &n);
    collatz(n);
    printf("...End.\n");
        return 0;
}
