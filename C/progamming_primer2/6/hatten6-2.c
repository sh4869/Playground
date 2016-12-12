#include <stdio.h>

int main(void){
  char str[100];
  int i = 0;
  int count = 0;
  int inword = 0;
  printf("英文を入力してください\n");
  gets(&str[0]);
  while(str[i] != '\0'){
    if(str[i] >= 0x41 && str[i] <= 0x5a){
      printf("%c",str[i]);
    }
    i++;
  }
  printf("\n");
  return 0;

}
