#include <stdio.h>

int main(void){
    int x;
    x = 1;
    aaa:
    printf("%d\n",x);
    x = x+1;
    if( x <= 10)goto aaa;
    return 0;
}