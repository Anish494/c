#include<stdio.h>
int main()
{
    int a=5;
    int *ptra=&a;
    int *num;
    int *num2=NULL;
    printf("The value of a is %d \n",a);
    printf("The value of a is %d\n",*ptra);         //printf value in that address
    printf("The address of a is %x\n",&a);
    printf("The address of a is %x\n",ptra);        //printf address of value stored


    printf("The value of ptra is %x\n",ptra);
    printf("The address of ptra is %x\n",&ptra);
    printf("The address of pointer to a is %x\n",&ptra);
    printf("The address of a is %x\n",ptra);                
    /*  %x is address in hexadecimal
         %p can also be used 
         to print address  */

    printf("Address of some garbage is %x\n",num);
    printf("Address of some garbage is %x\n",num2);
    return 0;
}