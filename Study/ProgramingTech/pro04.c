#include <stdio.h>

double pow(int k){
	int i;
	double val = 1;
	if(k > 0){
		for(i=0;i<k;i++){
			val *= 10;
		}
	}else{
		k *= -1;
		for(i=0;i<k;i++){
			val /= 10;
		}
	}

	return val;
}

double kirisute(int k,double x){
	double val;
	val = x / pow(k);
	val = (int)val;
	return val * pow(k);
}

double kiriage(int k,double x){
	double val;
	val = x / pow(k);
	if(val - (int)val != 0){
	  val = (int)(val+1);
	}
	return val * pow(k);
}

double sisha(int k,double x){
	double val;
	val = x / pow(k);
	val = (int)(val+0.5);
	return val * pow(k);
}
double marume(int k,double x){
	double val;
	val = x / pow(k);
	if((val - 0.5) - (int)(val) != 0){
		return sisha(k,x);
	}
	val = (int)(val/2 + 0.5) * 2;
	return val * pow(k);
}
int main(void){
	double x,k, a, b, c, d;
	printf("正の実数値を入力："); scanf("%lf", &x);
	printf("丸めの幅を入力 : "); scanf("%lf",&k);
	a= kirisute(k,x);
	b= kiriage(k,x);
	c= sisha(k,x);
    d= marume(k,x); 	
		
	printf("切り捨て：切り上げ：四捨五入：偶数丸め\n");
	printf(" %6.2f ： %6.2f ： %6.2f ： %6.2f\n", 
			a, b, c, d);
	return 0;
}
