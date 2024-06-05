#include<stdio.h>
int main()
{
    int i,age;
    for(i=1;i<=10;i++)
    {
        printf("%d\n",i);
        printf("Enter your age::\n");
        scanf("%d",&age);
        if(age>10)
        {
            continue;                  //It doesnot ends the loop but escapes some 
                                    //code for that iteration/time and next cycle begins
        }
        printf("This will not be printed if cond is met for continue \n");
    }
    return 0;
}