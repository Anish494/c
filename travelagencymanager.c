#include<stdio.h>
#include<string.h>
struct employee{
    char name[30];
    int dv;
    int kms;
} s[3];
int main()
{
    for(int i=0;i<3;i++)
    {
        printf("Enter name of driver %d::",i+1);
        scanf("%s",&s[i].name);
        printf("Enter driving liscence no of driver %d::",i+1);
        scanf("%d",&s[i].dv);
        printf("Enter kms travelled of driver %d::",i+1);
        scanf("%d",&s[i].kms);
    }
    printf("\nThe entered data is ::\n\n");
    for(int i=0;i<3;i++)
    {
        printf("Name=%s \t Driving Liscence no =%d \t  KMs traelled =%d \n",s[i].name,s[i].dv,s[i].kms);
    }
    return 0;
}