// pro01.c
#include <stdio.h>

int main(void){
    int a, b;
    a = 10;
    b = 20;
    printf("Before: a = %d, b = %d \n", a, b);
    /* Answer 1 */
    a = a * b;
    b = a / b;
    a = a / b;

    /* Answer 2 */
    a = a + b;
    a = a - b;
    a = a - b;
    
    printf("After : a = %d, b = %d \n", a, b);
    return 0;
}
