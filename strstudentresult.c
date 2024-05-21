#include<stdio.h>
struct student{
    int id;
    char name[30];
    int m1,m2,m3;
    int total;
} s[10];
int main()
{
    int i,max,maxp,temp;
    for(i=0;i<10;i++)
    {
        printf("Enter the id of student %d::",i+1);
        scanf("%d",&s[i].id);
        printf("Enter name of student %d::",i+1);
        //gets(s[i].name);
        scanf("%s",&s[i].name);
        printf("Enter marks is 3 subjects::");
        scanf("%d%d%d",&s[i].m1,&s[i].m2,&s[i].m3);
    }
    for(i=0;i<10;i++)
    {
        s[i].total=s[i].m1+s[i].m2+s[i].m3;
    }
    for(i=0;i<10;i++)
    {
        printf("ID= %d\t",s[i].id);
        printf("Name = %s\t",s[i].name);
        printf("Marks in 3 sub::%d \t %d \t %d\t",s[i].m1,s[i].m2,s[i].m3);
        printf("Total= %d\n",s[i].total);
    }
    max=s[0].total;
    for(i=0;i<10;i++)
    {
        if(s[i].total>max)
        {
            
            max=s[i].total;
            
        }
    }
    printf("\nMax marks is %d\n",max);
    for(i=0;i<10;i++)
    {
        if(max==s[i].total)
        {
            maxp=i;
            printf("Max marks is of student at position %d\n",maxp);
            break;
        }
    }
    printf("Details of student with highest total::\n ");
    printf("ID= %d\t",s[maxp].id);
    printf("Name = %s\t",s[maxp].name);
    printf("Marks in 3 sub::%d \t %d \t %d\t",s[maxp].m1,s[maxp].m2,s[maxp].m3);
    printf("Total= %d\n",s[maxp].total);
    return 0;

}