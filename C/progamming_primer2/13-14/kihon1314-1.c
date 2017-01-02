#include <stdio.h>

int start_year = 1583;
typedef enum {Jan=1,Feb,Mar,Apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec} month;
typedef enum { Sun = 0,Mon,Tue,Wed,Thu,Fri,Sat } DayOfWeek;
int year_month_days[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
int leap_year_month_days[12] = {31,29,31,30,31,30,31,31,30,31,30,31};

int isLeapYear(int year){
  if((year % 400 == 0) || (year % 100 != 0  && year % 4 == 0)){
    return 1;
  } else {
    return 0;
  }
}

int firstDayOfTheYear(int year){
  int i = start_year;
  int count = Sat;
  while(i < year){
    if(isLeapYear(i)){
      count += 366;
    } else {
      count += 365;
    }
    i++;
  }
  return count % 7;
}

int numOfDays(int year, month m){
  if(isLeapYear(year)){
    return leap_year_month_days[m - 1];
  } else {
    return year_month_days[m - 1];
  }
}

int firstDay(int year,month m){
  int count = firstDayOfTheYear(year);
  int i;
  if(isLeapYear(year)){
    for(i = 0; i < m - 1;i++){
      count += leap_year_month_days[i];
    }
  } else {
    for(i = 0; i < m - 1;i++){
      count += year_month_days[i];
    }
  }
  return count % 7;
}

int printCal(int year,month m){
  int dow = firstDay(year,m);
  int i,j;
  printf("[%d年%d月]\n",year,m);  
  printf(" 日 月 火 水 木 金 土\n");
  printf("----------------------\n");
  for(i=1;i <= numOfDays(year,m);i++){
    if(i == 1){
      for(j=0;j<dow;j++){
        printf("   ");
      }
    }
    printf("%3d",i);
    if(dow == 6){
      dow = 0;
      printf("\n");
    } else {
      dow += 1;
    }
  }
  printf("\n");
}


int test(void){
  printf("isLeapYearFunction\n");
  if(
      isLeapYear(2016) == 1 &&
      isLeapYear(2000) == 1 &&
      isLeapYear(1900) == 0 &&
      isLeapYear(1999) == 0
    ) {
    printf("OK\n");
  }
}

int main(void){
  int year;
  int m;
  printf("入力された年・月のCalendarを表示します\n");
  printf("西暦(1583年以降を入力してください:");
  scanf("%d",&year);
  printf("月を入力してください:");
  scanf("%d",&m);
  printCal(year,m);
  return 0;
}

