#include<stdio.h>
int main()
{
   int a[100], n, search,i;
   

   printf("Enter array size [1-100]:\n ");
   scanf("%d", &n);

   printf("Enter array elements:\n ");
   for(i=0; i<n; i++)scanf("%d", &a[i]);

   printf("Enter element to search:\n ");
   scanf("%d",&search);

   for(i=0; i<n; i++)
   {
     if(a[i]==search)
     {
       printf("%d present at position %d", search, i+1);
       return 0;
     }
   }

   printf("%d is not found.", search);
   return 0;
}