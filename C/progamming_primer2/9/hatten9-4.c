#include <stdio.h>
typedef struct{
  char name[20];
  int height;
} student;

int main(void){
    student s[3];
    int i=0,height,flag=0;
    for (i = 0; i < 3; i++)
    {
        printf("%d人目\n",i+1);
        printf("名前:");
        scanf("%s",s[i].name);
        printf("身長:");
        scanf("%d",&s[i].height);
    }
    printf("登録完了\n");
    printf("基準となる身長を入力して下さい:");
    scanf("%d",&height);
    printf("身長が%dcm以上の学生:",height);
    for (i = 0; i < 3; i++)
    {
        if(s[i].height > height){
            if(flag){
                printf(",");
            }
            flag = 1;
            printf("%s",&s[i].name[0]);
        }
    }
    printf("\n");
}