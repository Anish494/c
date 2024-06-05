/* program that shows different properties 
of %f*/


#include<stdio.h>
int main()
{
    int a=5;
    float b=3.44;
    printf("%d\n",a);
    printf("%f\n",b);
    printf("%.9f\n",b);       //9 digits after decimal
    printf("%11.4f\n",b);     /*4 digits after decimal with total 
                              11 digits space with space at beginning*/
    printf("%-11.4fthis\n",b);  /*4 digits after decimal with 
                              total 11 digits space with space at end*/                         
    printf("%10f",b);             
    return 0;               
}