#include <stdio.h>
#include <limits.h>

int main(void) {
  if(CHAR_MIN) {
    printf("この処理系のchar型は符号付きです\n");
  }
  return 0;
}
