#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a::");
    scanf("%d",&a);
    printf("Enter b::");
    scanf("%d",&b);

    printf("Before swapping, \na=%d\nb=%d\n",a,b);

    /*c=b;
    b=a;
    a=c;*/

    c=a;
    a=b;
    b=c;
    
    printf("After swapping,\na=%d\nb=%d",a,b);
    return 0;

}