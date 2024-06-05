#include<stdio.h>
int main()
{
    float c,f,dc,df;
    printf("Enter degreee celcius::\n");
    scanf("%f",&c);
    f=(c*9/5)+32;
    printf("%.2f C=  %.2f F\n",c,f);

    printf("Enter degree Fahrenheit::\n");
    scanf("%f",&df);

    dc=(df-32)*5/9;
    printf("%.2f F = %.2f C ",df,dc);
    return 0;
}