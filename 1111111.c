#include<stdio.h>
#include<math.h>
int display(int n);
int main()
{
    int i, a;
    printf("Enter number of terms:");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        printf("%d\t",display(i));
    }
}
int display(int n)
{
    int m,result=0;
    if(n==1)
    {
        result=1;
    }
    else{
        result=1+10*display(n-1);
    }
    return result;
}