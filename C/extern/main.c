#include <stdio.h>
#include "test.h"
#include "main.h"

A a;

int global_value;
int main(void){
  a.A = 100;
  global_value = 0;
  printf("Hello World extern test\n");
  printf("global_value = %d\nA.a = %d\n",global_value,a.A);
  test();
  printf("global_value = %d\nA.a = %d\n",global_value,a.A);
  return 0;
}
