#include<stdio.h>
int main()
{
    int i,j,age[10];               //initialization
    int marks[5]={4,3,5,6,7};       //initialization and declaration
    //int marks[]={4,3,5,6,7};      //[5] or [] both are right
    for(i=0;i<5;i++)
    {
        printf("Enter age of5 people::\n");
        scanf("%d",&age[i]);

    }
    for(i=0;i<5;i++)
    {
        printf("The age of students are ::%d\n",age[i]);

    }

    for(j=0;j<5;j++)
    {
        printf("The marks  are %d\n",marks[j]);
    }
    return 0;
}