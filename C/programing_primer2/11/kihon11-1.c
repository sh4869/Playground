#include <stdio.h>

typedef enum {Und,Gra} ug;
void showUG(ug s){
  if(s == Und){
    printf("あなたは学部生です。\n");
  } else {
    printf("あなたは大学院生です。\n");
  }
}

int main(void){
  ug e;
  printf("学部生か大学院生かを入力(学部生0,大学院生1):");
  scanf("%d",&e);
  showUG(e);
  return 0;
}
