#include<stdio.h>
int average(int average[])      //the array name here and in main function is not necessarily be same
{
    int i,sum=0;
    for(i=0;i<5;i++)
    {
        sum=sum+average[i];
    }
    return sum/5;
}
int main()
{
    int av[]={1,2,3,4,5};
    int avr;
    avr=average(av);
    printf("The average is %d",avr);
    return 0;
}