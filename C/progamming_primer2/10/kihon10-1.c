#include <stdio.h>
#include <stdlib.h>

int main(void){
  int no,i;
  char *p;
  printf("文字数の上限を入力してください:");
  scanf("%d",&no);
  p = calloc(no,sizeof(int));
  if(p == NULL){
    printf("記憶領域の確保に失敗しました．\n");
  } else {
    scanf("%s",p);
    for(i=no;i>=0;i--){
      if(p[i] != '\0'){
        printf("%c",p[i]);
      }
    }
  }
  printf("\n");
  free(p);
  return 0;
}
