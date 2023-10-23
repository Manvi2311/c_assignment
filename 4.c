#include<stdio.h>
int main()
{
    int p,r,t,si;
    printf("enter principle");
    scanf("%d",&p);
    printf("enter rate");
    scanf("%d",&r);
    printf("enter time");
    scanf("%d",&t);
    si=p*r*t/100;
    printf("simple interest is %d",si);
    return 0;
}
