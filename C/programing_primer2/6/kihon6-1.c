#include <stdio.h>

int main(void){
  char str[100];
  int i = 0;
  printf("英文を入力してください\n");
  gets(&str[0]);
  for(i=0;str[i] != '\0';i++);
  printf("あなたが入力した英文の文字数は%dです\n",i);
  return 0;

}
