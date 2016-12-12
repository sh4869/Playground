#include <stdio.h>

int main(void){
  FILE * fp;
  char str[100];
  char file_name[100];
  printf("文字列をファイルに書き込みます\n");
  printf("ファイル名を入力してください:");
  scanf("%s",file_name);
  printf("文字列を入力してください:");
  scanf("%s",str);
  fp = fopen(file_name,"w");
  fprintf(fp,"%s",str);
  fclose(fp);
  return 0;
}
