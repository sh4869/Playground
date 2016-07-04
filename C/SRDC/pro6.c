#include <stdio.h>

int main(void){
    int i,j,flag = 1;
    for(i = 2;i<101;i++){
        flag = 1;
        for(j=2;j<i;j++){
            if(i % j == 0) flag = 0;
        }
        if(flag == 1){
            printf(" %d",i);
        }
    }
    printf("\n");
}