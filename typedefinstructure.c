//typedef is keyword used to give new nickname to datatype
//u can still use original name inspite of its nickname


#include<stdio.h>
typedef struct student   
{
    int id;
    int roll;
} std ;                   //nickname of 'struct student' is now set to 'std'
int main()
{
  // struct student s1,s2;
   std s1,s2;                    //both of this and upper line of code works the same
    s1.id=34;
    s2.id=23;

    s1.roll=54;
    s2.roll=43;

    printf("s1's id is %d\n",s1.id);
    printf("s2's id is %d\n",s2.id);

    printf("s1's roll is %d\n",s1.roll);
    printf("s2's roll is %d\n",s2.roll);


    //just for concept
    int *a,b;            //here a is pointer and b is integer
    int c=5;
    a=&c;
    b=c;

    typedef int* pointer ;          //here pointer is nickname for *int
    pointer d,e;                    //here both d and e are pointers
    int f=45;
    d=&f;
    e=&f;
}