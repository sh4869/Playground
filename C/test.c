#include <stdio.h>
 
int main(int argc,char **argv){
	int hoge[10];
	int *fuga;

	fuga = malloc(1);

	printf("hoge address = %p\n",hoge);
	printf("fuga address = %p\n",fuga);

	free(fuga);
	return 0;
}
