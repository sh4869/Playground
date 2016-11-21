#include <stdio.h>

typedef struct {
  int id;
  char name[20];
  int einglish;
} student;

int main(void) {
  student students[3];
  int i,id,flag = 0;
  for(i = 0; i < 3; i++){
    printf("%d人目\n", i+1);
    printf("学籍番号:");
    scanf("%d",&students[i].id);
    printf("名前:");
    scanf("%s",students[i].name);
    printf("英語:");
    scanf("%d",&students[i].einglish);
  }
  printf("登録完了\n");
  printf("探したい人の学籍番号を入力:");
  scanf("%d",&id);
  for(i=0;i < 3; i++){
    if(students[i].id == id){
      printf("学籍番号:%d,名前:%s,英語:%d\n",students[i].id,&students[i].name[0],students[i].einglish);
      flag =1;
      break;
    }
  }
  if(!flag){
    printf("見つかりませんでした．\n");
  }
  return 0;
}
