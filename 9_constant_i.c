/*program to declare constant*/


#include<stdio.h>
int main()
{
    int a=5;
    float b=3.44;
    const int c=6;
    const float d=2.33;
    printf("%d\n",a);        //a=5 
    printf("%d\n",c);  
    a=7;
    printf("%d\n",a);         //a=7
    //c=9;                     // wrong...c cannot be changed
    //printf("%d\n",c);         //error
    return 0;               
}