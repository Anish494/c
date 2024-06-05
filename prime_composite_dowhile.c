#include<stdio.h>
int main()
{
    int rem,sum=0,num,i=1;
    printf("Enter a number to check prime or composite::\n");
    scanf("%d",&num);
    do
    {
        rem=num%i;
        if(rem==0)
        {
            sum=sum+1;
        }
        i=i+1;
    } while (i<=num);
    if(sum==2)
    {
        printf("Prime number");
    }
    else
    {
        printf("Composite number");
    }
    return 0;
}