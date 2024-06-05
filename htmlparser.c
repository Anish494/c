#include<stdio.h>
#include<string.h>
parser(char *string)
{
    int in=0;     //it is just a variable to check whether we are inside the tag or not
    int index=0;
    for (int i = 0; i < strlen(string); i++)
    {
        if(string[i]=='<')
        {
            in=1;
            continue;
        }
        else if(string[i]=='>')
        {
            in=0;
            continue;
        }
        if(in==0)
        {
            string[index]=string[i];
            index++;
        }
    }
    string[index]='\0';



    //now remove the blank spaces from beginning
    while(string[0]==' ')
    {
        //shift the string to the left
        for(int i=0;i<strlen(string);i++)
        {
            string[i]=string[i+1];
        }
    }


    //now remove blank spaces fron end
    while(string[strlen(string)-1]==' ')
    {
        string[strlen(string)-1]='\0';
    }
    
}
int main()
{
    char string[50]="<h1>    This is heading     </h1>";
    printf("The string to be parsed is \n--%s--\n",string);
    parser(string);
    printf("The parsed string is \n--%s--",string);
    return 0;
}