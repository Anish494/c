//example of call by value function are alll 4 types of functions we learnt before

//examples if call by referrence

#include<stdio.h>
int ref(int *m)
{
    *m=88;
    return *m;
}
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    
}
int main()
{
    int a=3,b=4,m=8;
    // printf("%d....%d\n",a,b);
    // swap(&a,&b);
    // printf("%d....%d\n",a,b);

    printf("Value is %d\n",m);

    printf("Value is %d",ref(&m));

    return 0;
}