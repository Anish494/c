#include<stdio.h>
int main()
{
    int i=1;
    while(i<=30)
    {
        printf("%d\n",i);
        i=i+1;
    }                    //do not use semicolon ; here as it exits itself when condition is false
    
    return 0;
}
