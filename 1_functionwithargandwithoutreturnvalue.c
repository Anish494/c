#include<stdio.h>
//int sum(int a,int b);             //declaration of function, function should be declared 
                                  //before its use/calling it.

   //we can also return value of a+b from here so that we do not need to write code down
   
int sum(int a,int b)                  /*
                                      function declaration
                                       its saying function what to do

                                       It can also be declared at buttom at last
                                       */
   {
        int m;
        m=a+b;              
        return m;            //it returns the result 
   }

                                  
int main()
{
    int a,b,c;
    printf("Enter a number::\n");
    scanf("%d",&a);
    printf("Enter another number::\n");
    scanf("%d",&b);
    c=sum(a,b);                            /* It fetches the return value givenn 
                                             by function
                                             It is calling of function
                                             It can be called any number of time */
    printf("The sum is %d\n",c);
    return 0;
}
/*
int sum(int a,int b)                
{
    int s;
    s=a+b;
    return s;
}
*/

/*
If we declare funtion at the top and wants our code to be neat and clean,
you can define it at the buttom as above or
you can define it at the top at the time of declaration too

so its your choice what to do.
*/