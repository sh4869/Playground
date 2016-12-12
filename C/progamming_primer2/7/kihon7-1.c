#include <stdio.h>

int countSpace(char *str)  {
  int i,count = 0;
  for(i=0;str[i] != '\0';i++){
    if(str[i] == ' '){
      count++;
    }
  }
  return count;
}

int main(void){
  char str[100];
  printf("英語の文字列を入力してください.:");
  gets(&str[0]);
  printf("文字列\"%s\" 中の空白の数は%d個です\n",&str[0],countSpace(str)); 
}
