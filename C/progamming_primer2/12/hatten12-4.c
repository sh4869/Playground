#include <stdio.h>
#include <string.h>
typedef struct {
  int number;
  char name[100];
  int price;
} prize;

int main(void){
  FILE * fp;
  int number,price,count;
  char name[200];
  prize prizes[100];
  int result = 0;
  fp = fopen("goods","r");
  if(fp==NULL){
    printf("失敗\n");
    return 1;
  }
  printf("買い物をします\n");
  printf("--商品リスト--\n");
  while(fscanf(fp,"%d%s%d",&number,name,&price) == 3){
    prizes[number].number = number;
    strcpy(prizes[number].name,name);
    prizes[number].price = price;
    printf("%d %-20s %4d円\n",number,name,price);
  }
  printf("商品番号と個数を入力\n");
  printf("商品番号:");
  scanf("%d",&number);
  printf("個数:");
  scanf("%d",&count);
  printf("合計金額は%d円です\n",prizes[number].price * count);
  fclose(fp);
  return 0;
}
