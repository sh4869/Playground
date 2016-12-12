#include <stdio.h>

typedef struct {
  int re;
  int im;
} complex;

complex sum(complex c1,complex c2){
  complex result;
  result.re = c1.re + c2.re;
  result.im = c1.im + c2.im;
  return result;
}

int main(void){
  complex c[2];
  char name[2] = {'a','b'};
  int i;
  for(i=0;i<2;i++){
    printf("複素数%cの実数部を入力してください:",name[i]);
    scanf("%d",&c[i].re);
    printf("複素数%cの虚数部を入力してください:",name[i]);
    scanf("%d",&c[i].im);
  }
  complex result = sum(c[0],c[1]);
  printf("a + b = %d + %di です\n",result.re,result.im);
  
}
