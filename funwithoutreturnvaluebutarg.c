#include<stdio.h>
void printstar(int m)
{
    int i;
    for(i=1;i<=m;i++)
    {
        printf("*");
    }
}

void printhash(int n);

int main()
{
int m,n;
    printf("How many stars do you want to print::\n");
    scanf("%d",&m);
    printstar(m);

    printf("\nHow many hash do you want to print::\n");
    scanf("%d",&n);
    printhash(n);
    return 0;
}

void printhash(int n)
{
    for(int j=1;j<=n;j++)
    {
        printf("#");
    }
}
