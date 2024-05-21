#include<stdio.h>
int main()
{
int c =0,n;
int a = 0;
int b = 1;

printf("which term?\n:");
scanf("%d",&n);
if(n==0)
{
    printf("%d\n",a);
}
else if(n==1)
{
    printf("%d\n",b);
}else
{
    for (int i=2;i<n;i++)
    {
        c=a+b;
        a = b; // swap elements
        b = c;
        
    //c=a+b;
    //printf("%d\n",c);
    }
    printf("%d",c);
    return 0;
}
}