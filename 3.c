#include<stdio.h>
int main()
{
    float b,h;
    float area;
    printf("enter breadth:");
    scanf("%f",&b);
    printf("enter height:");
    scanf("%f",&h);
    area=0.5*b*h;
    printf("area of triangle is: %f ",area);
    return 0;
    
}