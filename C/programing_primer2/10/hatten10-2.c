#include <stdio.h>
#include <stdlib.h>

typedef struct {
  char name[30];
  int math;
  int en;
  int calc;
} user;

void input_user(user *p,int n){
  int i = 0;
  for(i = 0;i<n;i++){
    printf("氏名:");
    scanf("%s",(p+i)->name);
    printf("数学:");
    scanf("%d",&((p+i)->math));
    printf("英語:");
    scanf("%d",&((p+i)->en));
    (p+i)->calc = calculate(*(p+i));
  }
}
int calculate(user p){
  return p.en + p.math;
}

void display_users(user * p,int n){
  int i,j;
  user tmp;
  printf("氏名     数学  英語  合計\n");
  for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
      if((p+i)->calc < (p+j)-> calc) {
        tmp = *(p+i);
        *(p+i) = *(p+j);
        *(p+j) = tmp;
      }
    }
  }
  for(i=0;i<n;i++){
    printf("%-10s %4d  %4d %4d\n",(p+i)->name,(p+i)->math,(p+i)->en,(p+i)->calc);
  }
}

int main(void){
  int n,i;
  user * p;
  printf("人数を入力してください:");
  scanf("%d",&n);
  p = calloc(n,sizeof(user));
  if(p == NULL){
    printf("記憶領域の確保に失敗しました\n");
    return -1;
  } else {
    input_user(p,n);
    display_users(p,n);
  }
  free(p);
  return 0;
}
