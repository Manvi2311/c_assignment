#include<stdio.h>
int main()
{
    int num,fac=1;
    printf("enter the number");
    scanf("%d",&num);
    while(num>0)
    {
      fac=num*fac;
      num--;
    }
   printf("factorial of number is %d",fac);
   return 0;

}