#include <stdio.h>

#define show(m1,e) if(e == m1) printf("You were born in %s\n",#m1);

typedef enum {Jan=1,Feb,Mar,Apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec} month;

void showMonth(month m) {
  show(Jan,m);
  show(Feb,m);
  show(Mar,m);
  show(Apr,m);
  show(May,m);
  show(Jun,m);
  show(Jul,m);
  show(Aug,m);
  show(Sep,m);
  show(Oct,m);
  show(Nov,m);
  show(Dec,m);
}

int main(void){
  month m;
  printf("生まれた月を入力:");
  scanf("%d",&m);
  showMonth(m);
  return  0;
}
