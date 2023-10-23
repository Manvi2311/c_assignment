#include<stdio.h>
int main()
{ 
char name;
char m,t,w,T,f,s,S;
printf("enter day");
scanf("%c",&name);
switch(name)
{
  case'm':
  printf("it is monday");
  break;
  case't':
  printf("it is tuesday");
  break;
  case'w':
  printf("it is wednesday");
  break;
  case'T':
  printf("it is thursday");
  break;
  case'f':
  printf("it is friday");
  break;
  case's':
  printf("it is saturday");
  break;
  case'S':
  printf("it is sunday");
  break;
  default:
  printf("it is not a weekday");
}
return 0;

}