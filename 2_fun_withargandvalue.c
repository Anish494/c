#include<stdio.h>
int add(int a, int b)             /*
                                  declaration and defination at a time

                                  a,b are called arguments whose value is given by calling..

                                  int is return value
                                  */
{
    int m;
    m=a+b;
    return m;
}

int multiply(int c,int d);            //declaration, defination at last
                                      //c,d are arguments whose value is given by calling

int main()
{
    int a,b,sum,c,d,product;
    printf("Enter two numbers to find sum::\n");
    scanf("%d%d",&a,&b);
    sum=add(a,b);
    printf("The sum of %d and %d is %d.\n",a,b,sum);

    printf("Enter two numbers to find product::\n");
    scanf("%d%d",&c,&d);
    product=multiply(c,d);
    printf("The product of %d and %d is %d\n",c,d,product);
    return 0;
}

int multiply(int c,int d)             //defination
{
    int p;
    p=c*d;
    return p;                   
}