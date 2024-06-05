#include<stdio.h>
int func()
{
    static c=5;              //it takes constant only and not the data from any function
    c++;                     //the value of c used before is preserved by it as it is static 
                             //and operates using the same value when called later in future
    return c;
}
int main()
{
    int a = 5;
    printf("The value of a after first function call is %d\n",func());        //6
    printf("The value of a after second function call is %d\n",func());       //7
    return 0;
}