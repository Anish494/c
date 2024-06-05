#include<stdio.h>
int main()
{
    int a,b;
    start:
    printf("Enter 1 to add numbers\nEnter 2 to multiply numbers\n");
    printf("Enter 3 to subtract numbers\nEnter 4 to find factorial\n");
    printf("Enter 5 to form table \nEnter 0 to quit\n");
    scanf("%d",&a);
    if(a==0)
    {
        goto end;
    }
    b=a;
    switch (b)
    {
        case (1):
        {
            printf("You entered 1\n");
            int b,c;
            printf("Enter 2 numbers::\n");
            scanf("%d%d",&b,&c);
            printf("The sum of %d and %d is %d\n\n\n",b,c,b+c);
            break;
        }

        case (2):
        {
            int d,e;
            printf("Enter 2 numbers::\n");
            scanf("%d%d",&d,&e);
            printf("The product of %d and %d is %d\n\n\n",d,e,d*e);
            break;
        }

        case (3):
        {
            int f,g;
            printf("Enter 2 numbers::\n");
            scanf("%d%d",&f,&g);
            printf("%d-%d=%d\n\n\n",f,g,f-g);
            break;
        }

        case (4):
        {
            int h,i,fact=1;
            printf("Enter number to find factorial::\n");
            scanf("%d",&h);
            for(i=1;i<=h;i++)
            {
                fact=fact*i;
            }
        printf("The factorial of %d is %d\n\n\n",h,fact);
            break;
        }

        case (5):
        {
            int j,k;
            printf("Enter a number to find table::\n");
            scanf("%d",&j);
            for(k=1;k<=10;k++)
            {
                printf("%d*%d=%d\n",j,k,j*k);
            }
            break;
        }

    }
    goto start;
    end:
    printf("You entered 0,quit.\n");
    
    return 0;
}