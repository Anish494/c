#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    char str[]="HELLO";
    for(i=0;i<5;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("%c",str[j]);
        }
        printf("\n");
    }
    for(i=5;i>0;i--)
    {
        for(j=0;j<i;j++)
        {
            printf("%c",str[j]);
        }
        printf("\n");
    }
}