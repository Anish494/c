#include<stdio.h>
int sum(int a[]);
int main()
{
    int a[]={1,2,3,4,5};
    int s;
    s=sum(a);
    printf("The sum is %d",s);
    return 0;
}
int sum(int a[])
{
    int add=0;
    for(int i=0;i<5;i++)
    {
        add+=a[i];
    }
    return add;

}