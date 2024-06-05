#include<stdio.h>
#include<math.h>
int main()
{
    int a,determinant,b,c;
    float x1,x2;
    float realx1,imgx1;
    printf("Enter a,b,c of ax^2 + bx + c::\n");
    scanf("%d%d%d",&a,&b,&c);
    determinant=  (b*b - 4*a*c);
    if(determinant>0)
    {
        x1=(-b+sqrt (determinant))/2*a;
        x2=(-b-sqrt (determinant))/2*a;
        printf("The roots are %.2f and %.2f\n",x1,x2);
    }
    else if(determinant==0)
    {
        x1=-b/2*a;
        printf("Two equal roots are %.2f\n",x1);
    }
    else{
        printf("Imaginary roootss.\n");
        realx1=-b/2*a;
        imgx1=(sqrt (-determinant))/2*a;
        printf("x1=%.2f+ %.2fi  and x2=%.2f - %.2fi",realx1,imgx1,realx1,imgx1);
    }
    return 0;
}