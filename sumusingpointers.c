#include<stdio.h>
int main()
{
    int a[50],n,i,sum=0;
    
    
    printf("How many numbers do you want to add::");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        sum=sum+ (*(a+i));
    }
    printf("The sum is %d",sum);
    return 0;

}