#include<stdio.h>
int main()
{
    int i,age;
    for(i=1;i<=100;i++)
    {
        printf("%d\n",i);
        if(i==10)
        {
            break;          //loop exits when i==10 that is the loop takes data 
                            //of max 10 people no matter expression 2 condition
                            // It can be used to control loop
        }
        printf("Enter your age::\n");
        scanf("%d",&age);
        if(age>10)                //loop exits when age of a person is more than 10
        {
            break;
        }
    }
    return 0;
}