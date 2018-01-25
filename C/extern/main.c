#include <stdio.h>
#include "test.h"

int global_value;
int main(void){
  global_value = 0;
  printf("Hello World extern test\n");
  printf("global_value = %d\n",global_value);
  test();
  printf("global_value = %d\n",global_value);
  return 0;
}
