#include<stdio.h>
int main()
{
   int n,tab,a=1;
   printf("enter number");
   scanf("%d",&n);
   while(a<=10)
   {
   tab=n*a;
   printf("table is %d \n",tab);
   a++;
   }
   return 0;
}

