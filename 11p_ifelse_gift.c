#include<stdio.h>
int main()
{
    int m,s;
    printf("Enter your marks in maths::\n");
    scanf("%d",&m);
    printf("Enter your marks in science::\n");
    scanf("%d",&s);

    if (m>=40&&s>=40)
    {
        printf("You won rs 45");
    }
    else if(m>=40||s>=40)
    {
        printf("You won rs 15");
    }
    else
    {
        printf("Padh vai padh");
    }
    return 0;
}