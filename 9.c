#include<stdio.h>
int main()
{
  char CH;
  int lower_case, upper_case;
  printf("enter alphabet");
  scanf("%c",&CH);
  lower_case= (CH == 'a'||CH == 'e'|| CH == 'i'||CH == 'o'||CH =='u');
  upper_case= (CH == 'A'||CH == 'E'||CH == 'I'||CH == 'O'||CH == 'U');
  if (upper_case || lower_case)
  {
    printf("%c it is vowel",CH);
  }
    else
    printf("%c it is not a vowel",CH);
    return 0;
  }
  
    
  