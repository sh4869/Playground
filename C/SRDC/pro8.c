#include  <stdio.h>

double avarage(double sum){
    return sum / 3;
}

double calcsum(double *x){
    return (x[0]  + x[1] + x[2]);
}

int main(void){
    int i;
    double x[3];
    printf("数字を入力してください.\n");
    for(i=0;i<3;i++){
        scanf("%lf",&x[i]);
    }
    double ava = avarage(100.0);
    printf("数字の平均は%fです\n",avarage(calcsum(x)));
    return 0;
}