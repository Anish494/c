/* program to declare a constant
using preprocessor*/


#include<stdio.h>
#define pi 3.14                  // do not write = sign
int main()
{
    printf("%f",pi);
   // pi=4.5;                       //error...as pi is a constant
   // printf("%f",pi);
    return 0;
}