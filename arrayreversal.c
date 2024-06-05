#include<stdio.h>
void rev(arr[]);
int main()
{
    int arr[]={1,2,3,4,5};
    rev(arr);
    return 0;
}

//this function displays reversed array but do not store it, original array is not changed
/*
void rev(arr[])
{
    printf("The array before reversal is ::\n");
    for(int i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\nThe array after reversal is \n");
    for(int j=4;j>=0;j--)
    {
        printf("%d\t",arr[j]);
    }
} 
*/

//this function actually reverses the array
void rev(arr[])
{
    printf("The array before reversal is ::\n");
    for(int i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }

    int temp;
    for(int i=0;i<5/2;i++)
    {
        temp=arr[i];
        arr[i]=arr[4-i];
        arr[4-i]=temp;
    }

    printf("\nThe array after reversal is \n");
    for(int i=0;i<5;i++)
    {
        printf("%d\t",arr[j]);
    }
} 