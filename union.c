#include<stdio.h>
#include<string.h>
union student
{
    int id;
    char name[50];
    int roll;
    char favchar;
};// s;
//union student s;       //global variable
int main()
{
   //union student s={34,"Anish",45};           //local variable

    // printf("Enter id::\n");
    // scanf("%d",&s.id);
    // printf("Enter name::\n");
    // scanf("%s",&s.name);
    // printf("Enter rol::\n");
    // scanf("%d",&s.roll);

     union student s;
    s.id=9;
    strcpy(s.name,"Anish");                //s.name="Anish";
    s.roll=8;
    s.favchar='u';               //lastly entered data is preferenced and is displayed correctly, 
                                 //other data are not displayed correctly or are altered if not adjustable

    printf("The entered data is ::\n");
    printf("ID=%d\n",s.id);
    printf("Name=%s\n",s.name);
    printf("Roll=%d\n",s.roll);
    printf("Favchar=%c",s.favchar);
    return 0;
}