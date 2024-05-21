#include<stdio.h>
#include<string.h>
int main()
{
    char s1[]="Anish";
    char s2[]="Kumar";
    puts(s1);
    puts(s2);
    
    // printf ("%s",strcat(s1,s2));
   int len;
   len=strlen(s1);
   printf("The length of '%s' is %d\n",s1,len);
  // puts(strrev(s1));
}