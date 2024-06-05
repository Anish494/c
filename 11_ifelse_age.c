/*program to find if you are eligible to vote
or not*/


#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age::\n");
    scanf("%d",&age);
    printf("You entered %d as your age.\n",age);

    if (age>=18)
    {
        printf("You can vote");
    }
    else if (age<=12)
    {
        printf("You are not even a teeenager");
    }
    else
    {
        printf("you can vote for kids");
    }
    return 0;
}