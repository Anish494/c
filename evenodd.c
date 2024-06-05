#include<stdio.h>
int main()
{
    int a,rem;
    printf("Enter a number::\n");
    scanf("%d",&a);
    rem=a%2;
    if(rem==0)
    {
        printf("Even number.");
    }
    else{
        printf("Odd number.");
    }
    return 0;
    
}