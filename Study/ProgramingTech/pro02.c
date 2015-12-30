// pro02.c
#include <stdio.h>
int calc(int *s);
void disp(int *s, int x);

int main(void){
	int i, s[10], x;
	for(s[1]=1; s[1]>=-1; s[1]-=2)
		for(s[2]=1; s[2]>=-1; s[2]--)
			for(s[3]=1; s[3]>=-1; s[3]--)
				for(s[4]=1; s[4]>=-1; s[4]--)
					for(s[5]=1; s[5]>=-1; s[5]--)
						for(s[6]=1; s[6]>=-1; s[6]--)
							for(s[7]=1; s[7]>=-1; s[7]--)
								for(s[8]=1; s[8]>=-1; s[8]--)
									for(s[9]=1; s[9]>=-1; s[9]--){
										x=calc(s);
										disp(s,x);
										if(x==100)
											disp(s, x);
									}
	return 0;
}

int calc(int *s){
	// x ... 最終的に返す値 m ... 一時的な計算値
	int i,x=0,m=0;
	for(i = 1;i < 10;i++){
		switch(s[i]){
			case 0:
				// もしmがプラスならmをたそうとしているからmをひとけた繰り上げてから+iする
				// もしmがマイナスならmを引こうとしてるからmをひとけた繰り上げてから-iする
				if(m > 0){
					m = m * 10 + i;
				}else{
					m = m * 10 - i;
				}
				break;
			case 1:
				x += m;
				m = i;
				break;
			case -1:
				x += m;
				m = -1 * i;
				break;
		}
	}
	x += m;
	return x;
}

void disp(int *s, int x){
	int i;
	for(i=1; i<10; i++){
		if(s[i]==1)printf(" + ");
		else if(s[i]==-1)printf(" - ");
		printf("%d", i);
	}
	printf(" = %d\n", x);
}
