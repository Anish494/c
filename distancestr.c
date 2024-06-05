#include<stdio.h>
#include<math.h>
struct cat{
    int x,y;
} s[2];
int main()
{
    int i;
    int d,sr;
    for(i=0;i<2;i++)
    {
        printf("Enter x-coordinate of point %d::",i+1);
        scanf("%d",&s[i].x);
        printf("Enter y-coordinate of point %d::",i+1);
        scanf("%d",&s[i].y);

    }
    sr=pow((s[1].x-s[0].x),2)+pow((s[1].y-s[0].y),2);
    d =sqrt(sr);
    printf("Distance between entered points is %d units",d);
    return 0;
}