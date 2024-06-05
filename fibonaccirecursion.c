#include<stdio.h>
int fibo(int a);
int main()

{
    int a,fib;
    printf("Enter the value of n for nth term::\n");
    scanf("%d",&a);
    fib=fibo( a);
    printf("%dth fibonacci term is %d",a,fib);
}
int fibo(int a)
{
    if(a==1)
    {
        return 0;              //because first term is 0
    }
    else if(a==2)
    {
        return 1;               //because second term is 1
    }
    else 
    {
        return (fibo(a-1)+fibo(a-2));
    }
}