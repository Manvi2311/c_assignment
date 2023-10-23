#include<stdio.h>
int main()
{ 
    float cel,feh;
    printf("enter temp in celsius");
    scanf("%f",&cel);
    feh=(cel*1.8)+32;
    printf("temperature in Fahrenheit is %f",feh);
    return 0;
}