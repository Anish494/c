#include<stdio.h>
#include<string.h>
struct student
{
    int id;
    char name[50];
    int roll;
}; //s;
//struct student s;       //global variable
int main()
{
   //struct student s={34,"Anish",45};           //local variable

    // printf("Enter id::\n");
    // scanf("%d",&s.id);
    // printf("Enter name::\n");
    // scanf("%s",&s.name);
    // printf("Enter rol::\n");
    // scanf("%d",&s.roll);

    struct student s;
    s.id=9;
    strcpy(s.name,"Anish");
    //s.name="Anish";
    s.roll=8;

    printf("The entered data is ::\n");
    printf("ID=%d\n",s.id);
    printf("Name=%s\n",s.name);
    printf("Roll=%d",s.roll);
    return 0;
}