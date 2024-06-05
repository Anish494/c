#include<stdio.h>
int main()
{
    int year;
    printf("Enter a year to check leap year\n");
    scanf("%d",&year);
    if((year%400)==0)
    {
        printf("%d is leap year.\n",year);
    }
    else if ((year%4)==0 && (year%100)!=0)
    {
        printf("%d is leap year.\n",year);
    }
    else 
    {
        printf("%d is not a leap year.\n",year);
    }
}