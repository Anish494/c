#include<stdio.h>
int main()
{
    int a,b,c,l1,l2;
    printf("Enter 3 numbers to find the larghest number::\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        l1=a;
    }
    else{
        l1=b;
    }
    if(l1>c)
    {
        l2=l1;
    }
    else{
        l2=c;
    }
    printf("The largest number is %d",l2);
    return 0;
}