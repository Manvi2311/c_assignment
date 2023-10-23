#include<stdio.h>
int main()
{
  char ch;
  printf("enter character");
  scanf("%c",&ch);
  if (ch>='a'&& ch<='z')
  {
    printf("it is lowercase");
  }
  else if (ch>='A' && ch<='Z')
  {
    printf("it is uppercase");
  }
  
  else if (ch>='0' && ch<='9')
  {
    printf("it is number");
  
  }

   else
   printf("it is special character");
  
return 0;
}