#include <stdio.h>

int main(void){
    int year;
    int heisei = 1989;
    int showa = 1926;
    int taisho = 1912;
    int meiji = 1868;
    printf("西暦(1868年以降)を入力してください:");
    scanf("%d",&year);
    if(year < meiji){
        printf("1868年以降で入力してください\n");
    } else {
        if(year >= heisei){
            if(year == heisei) printf("%d年は平成元年です．\n",year);
            else printf("%d年は平成%d年です．\n",year,year - heisei + 1);
        } else if(year >= showa){
            if(year == showa) printf("%d年は昭和元年です．\n",year);
            else printf("%d年は昭和%d年です．\n",year,year - showa + 1);
        } else if(year >= taisho){
            if(year == taisho) printf("%d年は大正元年です．\n",year);
            else printf("%d年は大正%d年です．\n",year,year - taisho + 1);
        } else {
            if(year == meiji) printf("%d年は明治元年です．\n",year);
            else printf("%d年は明治%d年です．\n",year,year - meiji + 1);
        }
    }
}