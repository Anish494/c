#include<stdio.h>
int main()
{
    int sum,num;
    printf("Enter a number upto which you want to add::\n");
    scanf("%d",&num);
    sum=(num+1)*num/2;
    printf("The sum upto %d is %d\n",num,sum);

    //using loop
    int n,i,s=0;
    printf("Enter a number::\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+i;
    }
    printf("The sun upto %d is %d\n",n,s);
    return 0;
}