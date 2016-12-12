#include <stdio.h>

void deleteSpace(char *str){
  int i,j = 0;
  char str2[100];
  for(i=0;str[i] != '\0';i++){
    if(str[i] !=  ' '){
      str2[j] = str[i];
      j++;
    }
  } 
  str2[j] = '\0';
  for(i=0;str2[i] != '\0';i++){
    str[i] = str2[i];
  }
  str[i] = '\0';
}

int main(void){
  char str[100];
  printf("英語の文字列を入力してください.:");
  gets(&str[0]);
  deleteSpace(str);
  printf("空白を削除すると\"%s\" になります\n",&str[0]); 
}
