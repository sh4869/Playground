#include <stdio.h>

int main(void){
  FILE * fp;
  int i,j;
  fp = fopen("kuku","w");
  for(i=1;i<10;i++){
    for(j=1;j<10;j++){
      fprintf(fp,"%3d",i*j);
    }
    fprintf(fp,"\n");
  }
  fclose(fp);
  return 0;
}
