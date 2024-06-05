#include<stdio.h>
int main()
{
    int i,j,num;
    for(i=1;i<5;i++)
    {
        printf("%d\n",i);
        for(j=1;j<5;j++)
        {
            printf("Enter a number.Enter 0 to exit\n");
            scanf("%d",&num);
            if(num==0)
            {
                //break;            //if you use break, program
                                  //will only come out of loop with j...bala for loop
                                  //but i loop will continue working

                goto end;        //if you use goto , program will come out where you
                                   //you have ordered it to...
            }
        }
    }
    end:
    printf("You entered 0.");
    return 0;
}