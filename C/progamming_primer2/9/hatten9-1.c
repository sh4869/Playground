#include <stdio.h>

typedef struct {
  char name[20];
  int height;
  double weight;
} student;

void showBMI(student s){
  printf("%sのBMIは%fです\n",&s.name[0],s.weight / (double)(s.height * s.height) * 10000);
}

int main(void){
  student s[3];
  int i,flag = 0;
  char na[20];
  for(i = 0; i < 3; i++){
    printf("%d人目\n", i+1);
    printf("名前:");
    scanf("%s",s[i].name);
    printf("身長:");
    scanf("%d",&s[i].height);
    printf("体重:");
    scanf("%lf",&s[i].weight);
  }
  printf("登録完了\n");
  printf("探したい人の名前を入力:");
  scanf("%s",na);
  for(i = 0;i < 3; i++){
    if(strcmp(na,s[i].name) == 0){
      showBMI(s[i]);
      flag = 1;
    }
  }
  if(!flag){
    printf("みつかりませんでした\n");
  }
}
