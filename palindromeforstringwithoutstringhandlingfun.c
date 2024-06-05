#include <stdio.h>
#include <string.h>
int main()
{
    char str[25], rev[25] ;
    int i, count= 0, flag ;
    printf("Enter a string \n");
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    printf("The length of the string '%s' = %d\n", str, count);
    for (i = count - 1; i >= 0 ; i--)
    {
        rev[count - i - 1] = str[i];
    }
    flag=1;
    for ( i = 0; i < count ; i++)
    {
        if (rev[i] != str[i])
            flag = 0;
    }
    if (flag == 0)
       printf ("%s is not palindrome \n", str);
    else
       printf("%s is a palindrome \n", str);
}