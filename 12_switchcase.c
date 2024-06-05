//WAP to show yes for 1 and no for 0


#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number between 1 and 0\n");
    scanf("%d",&a);

    switch(a)
    {
        case(0):
        printf("No");
        break;

        case(1):
        printf("Yes");
        break;

        default:
        printf("Invalid");
    }
    return 0;
}