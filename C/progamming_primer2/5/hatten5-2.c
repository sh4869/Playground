#include <stdio.h>

int swp(int *a,int *b){
  if(*a > *b){
    int tmp = *b;
    *b = *a;
    *a = tmp;
  }
}
int gcd(int n,int m){
  int r = m % n;
  while(r != 0){
    m = n;
    n = r;
    r = m % n;
  }
  return n;
}

int main(void){

  int a,b;
  printf("正の整数を入力してください:");
  scanf("%d",&a);
  printf("正の整数を入力してください:");
  scanf("%d",&b);
  swp(&a,&b);
  printf("%dと%dの最大公約数は%dです．\n",a,b,gcd(a,b));
}
