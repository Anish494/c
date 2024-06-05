#include<stdio.h>
#include<string.h>
void nam(char name[]);
int main()
{
    
   // char name[]="Anish";
   char name[]={'a','n','i','s','h','\0'};
//    char name[40];
//     gets(name);
    nam(name);
    return 0;
}
void nam(char name[])
{
    int i=0;
    while(name[i]!='\0')
    {
        printf("%c",name[i]);
        i++;
    }
}