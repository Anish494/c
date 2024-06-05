#include<stdio.h>
int main ()
{
    char ch;
    printf("Enter a character::::\n");
    scanf("%c",&ch);
    if((ch>='a' && ch <='z')||(ch >='A' && ch <='Z'))
    {
        printf("It is an alphabet.\n");
    }
    else
    {
        printf("It is not an alphabet.");
    }
    return 0;
}