#include<stdio.h>
#include<math.h>
int main()
{
    int p,t,r,i,ca;
    printf("Enter principal,time,rate respectively:\n");
    scanf("%d%d%d",&p,&t,&r);
    ca=p*(pow(1+(r/100)),t);
    i=ca-p;
    printf("The compound interest is %d\n",i);
    return 0;
}