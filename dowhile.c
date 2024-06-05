#include <stdio.h>
int main()
{
    int a, i = 0;
    printf("Enter a number::");
    scanf("%d", &a);
    do
    {
        i = i + 1;
        printf("%d\n", i);
    } while (i < a);
    return 0;
}