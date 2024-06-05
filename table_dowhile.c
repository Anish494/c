#include<stdio.h>
int main()
{
    int a,i=1;
    printf("Enter a number:;");
    scanf("%d",&a);

    do
    {
        printf("%d*%d=%d\n",a,i,a*i);
        i=i+1;
    }
    while(i<=10);
    return 0;
}