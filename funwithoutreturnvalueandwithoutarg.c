#include<stdio.h>
void sumfinder()
{
    int a,b,sum;
    printf("Enter 2 numbers::\n");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("The sum of %d and %d is %d\n",a,b,sum);
}

void productfinder();

int main()
{
    sumfinder();
    productfinder();
}

void productfinder()
{
    int m,n,pr;
    printf("Enter 2 numbers:\n");
    scanf("%d%d",&m,&n);
    pr=m*n;
    printf("The product of %d and %d is %d\n",m,n,pr);
}