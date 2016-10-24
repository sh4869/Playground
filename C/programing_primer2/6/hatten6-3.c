#include <stdio.h>

int main(void){
  char str[200],judge[200] = { '\0' };
  int i = 0,j=0,k;
  int count = 0;
  int inword = 0;
  printf("英文を入力してください\n");
  gets(&str[0]);
  while(str[i] != '\0'){
    if((str[i] >= 0x41 && str[i] <= 0x5a) || (str[i] >= 0x61 && str[i] <= 0x7a)){
      if(str[i] >= 0x41 && str[i]  <= 0x5a){
        judge[j] = str[i] + 0x20;
      } else {
        judge[j] = str[i];
      }
      j++;
    }
    i++;
  }
  k = j;
  for(i=0;i<k+1;i++){
    if(judge[i] != judge[j - 1]){
      printf("%sは回文ではありません。\n",&str[0]);
      return 0;
    } 
    j--;
  }
  printf("%sは回文です!\n",&str[0]);
  return 0;
}
