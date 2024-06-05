#include<stdio.h>
int valuereturned()
{
    int num;
    printf("Enter a number::\n");
    scanf("%d",&num);
    return num;
}

int sumreturned();

int main()
{
    int a,sum;
    a=valuereturned();
    printf("The number entered is %d\n",a);

    sum=sumreturned();
    printf("The sum of entered numbers is %d",sum);

}

int sumreturned()
{
    int c,d,s;
    printf("Enter two numbers::\n");
    scanf("%d%d",&c,&d);
    s=c+d;
    return s;
}