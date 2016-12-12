#include <stdio.h>

int main(void){
  FILE * fp;
  char name[100];
  double height = 0,weight=0,max_height = 0,max_weight = 0;
  fp = fopen("data","r");
  if(fp==NULL){
    printf("失敗\n");
    return 1;
  }
  while(fscanf(fp,"%s%lf%lf",name,&height,&weight) == 3){
    if(height > max_height){
      max_height = height;
    }
    if(weight > max_weight){
      max_weight = weight;
    }
  }
  printf("身長の最大値: %fcm\n",max_height);
  printf("体重の最大値: %fkg\n",max_weight);
  fclose(fp);
  return 0;
}
