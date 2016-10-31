#include <stdio.h>

int fibonacci(int n){
  if(n == 0 || n == 1) return 1;
  return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(void){
  int num;
  printf("0以上の整数を入力:");
  scanf("%d",&num);
  printf("F=(%d) = %d\n",num,fibonacci(num));
}
