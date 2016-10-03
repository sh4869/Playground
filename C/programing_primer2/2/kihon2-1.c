#include <stdio.h>

int main(void){
	int x;
	printf("整数を入力:");
	scanf("%d",&x);
	while(x >= 0){
		printf("%d",x);
		x--;
		if(x >= 0){
			printf(",");
		}
	}
	printf("\n");
	return 0;
}
