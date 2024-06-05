#include <stdio.h>
#include <math.h>
int main()
{
    int octal, decimal = 0;
    int i = 0;
    printf("Enter any octal number: ");
    scanf("%d", &octal);
    while (octal != 0)
    {
        decimal +=(octal % 10)* pow(8, i++);
        octal = octal / 10;
    }
    printf("Equivalent decimal value: %d",decimal);
    return 0;
}