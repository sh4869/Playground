#include <stdio.h>

int isPrime(int n){
  int i;
  if(n == 1) return 0;
  for(i=2;i<n;i++){
    if(n % i == 0) return 0;
  }
  return 1;
}
int main(void){
  int n;
  printf("正の整数を入力してください:");
  scanf("%d",&n);
  if(isPrime(n)){
    printf("%dは素数です\n",n); 
  } else {
    printf("%dは素数ではありません\n",n);
  }
  return 0;
}
