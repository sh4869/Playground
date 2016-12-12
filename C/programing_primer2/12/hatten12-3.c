#include <stdio.h>

int main(void){
  FILE * fp1, * fp2;
  char name[100];
  double height = 0,weight=0;
  fp1 = fopen("data","r");
  fp2 = fopen("data2","w");
  if(fp1==NULL){
    printf("失敗\n");
    return 1;
  }
  while(fscanf(fp1,"%s%lf%lf",name,&height,&weight) == 3){
    fprintf(fp2,"%-6s %2.1f %3.1f\n",name,weight,height);
  }
  fclose(fp1);
  fclose(fp2);
  return 0;
}
