#include <stdio.h>

int main(void){
  char str[100];
  int i = 0;
  int count = 0;
  int inword = 0;
  printf("英文を入力してください\n");
  gets(&str[0]);
  while(str[i] != '\0'){
    if((str[i] >= 0x41 && str[i] <= 0x5a) || (str[i] >= 0x61 && str[i] <= 0x7a)){
      inword = 1;
    } else {
      if (inword) {
        inword = 0;
        count++;
      }
    }
    i++;
  }
  if(inword) count++;
  printf("単語数は%dです\n",count);
  return 0;

}
