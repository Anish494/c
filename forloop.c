#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)               //i++ and i=i+1 are same things
    {
        printf("%d\n",i);
    }

    printf("Another way\n");
    for(i=5;i>0;i--)
    {
        printf("%d\n",i);
    }

//more than 1 expression can be initialized..
    printf("We can also initialize more than 1 expression\n");
    for(i=0,j=0;i<5;i++)
    {
        printf("%d %d\n",i,j);
    }

    //initialization is not compulsory if the variables are 
    //initially initialized in the beginning
    int a=0,b=0;
    printf("Initialization not compulsory\n");
    for(;a<5;a++)
    {
        printf("%d %d\n",a,b);
    }

    //multiple expressions can ne contitions of termination
    //and all the expressions are checked and works until last statement is true
    //doesnot terminate even if first condition finishes first
    //but the loop terminates only when last expression among conditions is false

    int m,n;
   
   
    printf("------------Multiple conditions applied\n");
    for(m=2,n=0;n<8,m<5;m++,n++)                //obeys second condition
    {                   //multiple values can be updated in 3rd expression
        printf("%d %d\n",m,n);
        //n++;   
        //m++;           //3rd expression is optional, value can be updated inside loop
    }
    return 0;
}