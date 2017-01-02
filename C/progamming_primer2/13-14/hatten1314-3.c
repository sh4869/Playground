#include <stdio.h>

void plus(int *a,int *b,int *ans,int length){
  int i,move_up = 0;
  for(i = 0;i < length;i++){
    if(a[i] + b[i] + move_up > 9){
      ans[i] = a[i] + b[i] + move_up - 10;
      move_up = 1;
    } else {
      ans[i] = a[i] + b[i] + move_up;
      move_up = 0;
    }
  }
  if(move_up == 1){
    ans[30] = 1;
  }
}

void zero_padding(char *a,int length){
  int i;
  for(i = 0;i<length;i++){
    if(a[i] == 0){
      a[i] = '0';
    }
  }
}

void asciitonum(char *str,int *num,int length){
  int i = 0,j = 0;
  for(j = 29; j > length;j--){
    num[j] = 0;
  }
  for(j = length; j > -1; j--){
    num[i] = str[j] - 0x30;
    i++;
  }
}
int get_length(char *str){
  int i = 0;
  while(1){
    if(str[i] == '\0') return i - 1;
    i++;
  }
}

int main(void){
  int a[30];
  int b[30];
  int ans[31] = {0};
  int i;
  char a_str[30];
  char b_str[30];
  int a_len,b_len;
  printf("30桁以内の正の整数を入力してください\n");
  scanf("%s",a_str);
  scanf("%s",b_str);
  a_len = get_length(a_str);
  b_len = get_length(b_str);
  asciitonum(a_str,a,a_len);
  asciitonum(b_str,b,b_len);
  plus(a,b,ans,30);
  printf("和は");
  for(i = 30;i > -1;i--){
    printf("%d",ans[i]);
  }
  printf("です\n");
  return 0;
}
