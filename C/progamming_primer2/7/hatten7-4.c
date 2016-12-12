#include <stdio.h>

int search(int *p,int size,int value){
  int i;
  for(i=0;i<size;i++){
    if(p[i] == value){
      return i;
    }
  }
  return -1;
}

int main(void){
  int i,j,s;
  printf("配列の長さを指定してください:");
  scanf("%d",&i);
  int a[i];
  printf("長さ%dの配列を入力してください\n",i);
  for(j=0;j<i;j++){
    printf("a[%d] = ",j);
    scanf("%d",&a[j]);
  }
  printf("検索する値を入力してください:");
  scanf("%d",&s);
  int value = search(a,i,s);
  if(value >= 0){
    printf("%dは配列aの%d番目にあります．\n",s,value);
  } else {
    printf("%dは配列の中にはありません．\n",s);
  }
}
