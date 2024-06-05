#include<stdio.h>
int main()
{
    int a=5;
    int *ptra=&a;
    printf("%d\n",ptra);
    printf("%d\n",ptra+1);        /*
                                   here , address value increases by 4 because
                                   value increases 1*size of (datatype) of pointer
                                   so, for int, size is 4 so value increases by 4
                                   */
    printf("%d\n",ptra+2);

    char b='y';
    char *ptrb=&b;              
    printf("%d\n",ptrb);
    printf("%d\n",ptrb+1);        //size of char is 1, so value increases by 1
    printf("%d\n",ptrb+1);        //size increases by 1
    printf("%d\n",ptrb-2);        //it takes exact value of ptrb but not assigned value 
                                  //which means adress of b is constant 

    int arr[]={1,2,3,4,5,6,7};
    printf("%d\n",arr[0]);        //value at position 0
    printf("%d\n",arr[3]);        //value at postition 3

    printf("%d\n",&arr[0]);       //address of position 0
    printf("%d\n",arr);           //arr==&arr[0]
    printf("%d\n",&arr[1]);       //address of position 1
                                  //it is greater by 4 because size of int is 4
    printf("%d\n",arr+1);         //arr+1 == &arr[1]    

    printf("%d\n",*(&arr[0]));    //value at position 0
    printf("%d\n",*(arr));        //value at position 0
    printf("%d\n",arr[0]);        //value at position 0

    printf("%d\n",*(&arr[1]));    //value at position 1
    printf("%d\n",*(arr+1));      //value at position 1
    printf("%d\n",arr[1]);        //value at position 1
    
    }                      