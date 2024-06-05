#include <stdio.h>

int main()
{
   int i, sum=0;
   printf("Numbers between 400 and 500, divisible by 9 : \n");
   for(i=401;i<500;i++)
   {
     if(i%5==0)
     {
       printf("%d\n",i);
       sum=sum+i;
     }
   }
   printf("\n\nThe sum : %d \n",sum);
   return 0;

}