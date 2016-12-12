#include <stdio.h>

int main(void){
  char str1[200],str2[200];
  int i = 0,j=0,k;
  int start = 0;
  printf("1つめの文字列を入力:");
  gets(&str1[0]);
  printf("2つめの文字列を入力:");
  gets(&str2[0]);
  while(str2[i] != '\0'){
    if(start){
      if(str2[i] == str1[j]){
        j++;
        if(str1[j] == '\0') {
          printf("%sは%sの部分文字列です\n",&str1[0],&str2[0]);
          return 0;
        }
      } else {
        start = 0;
        j = 0;
      }
    } 
    if(start == 0){
      if(str2[i] == str1[j]){
        start = 1;
        j++;
        if(str1[j] == '\0') {
          printf("%sは%sの部分文字列です\n",&str1[0],&str2[0]);
          return 0;
        }
      }
    }

    i++;
  }
  printf("%sは%sの部分文字列ではありません\n",&str1[0],&str2[0]);
  return 0;
}
