#include <stdio.h>

int main(void){
  int lines[2][2][2] = {{{0,0},{0,0}},{{0,0},{0,0}}};
  int ans[2][2] = {{0,0},{0,0}};
  int i,j,k;
  char name[2]  = {'a','b'};
  for(i=0;i<2;i++){
    printf("行列%cを入力してください:\n",name[i]);
    for(j=0;j<2;j++){
      for(k=0;k<2;k++){
        printf("%c[%d][%d] = ",name[i],j,k);
        scanf("%d",&lines[i][j][k]);
      }
    }
  }
  for(i=0;i<2;i++){
    for(j=0;j<2;j++){
      for(k=0;k<2;k++){
        ans[j][k] += lines[0][j][i] * lines[1][i][k]; 
      }
    }
  } 
  printf("行列の積は\n");
  for(i=0;i<2;i++){
    for(j=0;j<2;j++){
      printf("ans[%d][%d] = %d\n",i,j,ans[i][j]);
    }
  }
  printf("です．\n");
  return 0;
}
