#include <stdio.h>

int checkfirm(FILE ** fp){
  int st = 0,ed = 0;
  char c;
  while(fscanf(*fp,"%c",&c) == 1){
    if(c == '('){
      st += 1;
    } else if(c == ')'){
      ed += 1;
      if(ed > st){
        return 0;
      }
    }
  }
  if(st == ed) return 1;
  else return 0;
}

int main(void){
  FILE * fp;
  char file_name[100];
  printf("検査するファイル名を入力して下さい:");
  scanf("%s",file_name);
  fp = fopen(file_name,"r");
  if(checkfirm(&fp)){
    printf("カッコは正しく対応しています\n");
  } else {
    printf("カッコは正しく対応していません\n");
  }
  return 0;
}
