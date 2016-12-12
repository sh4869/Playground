#include <stdio.h>
#include <string.h>

int main(void){
  FILE * fp;
  char name[100];
  char find_name[100];
  double height = 0,weight=0;
  fp = fopen("data","r");
  if(fp==NULL){
    printf("失敗\n");
    return 1;
  }
  printf("名前を入力:");
  scanf("%s",find_name);
  while(fscanf(fp,"%s%lf%lf",name,&height,&weight) == 3){
    if(strcmp(name,find_name) == 0){
      printf("%s %3.1fcm %2.1fkg\n",name,height,weight);
    }
  }
  fclose(fp);
  return 0;
}
