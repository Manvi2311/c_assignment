#include<stdio.h>
int main()
{ 
    int marks;
    printf("enter marks(0-100): ");
    scanf("%d",&marks);
    marks=marks/10;
    switch( marks)
    {
       case 10:
       printf("grade-A");
       break;
       case 9:
       printf("grade-A");
       break;
       case 8:
       printf("grade-B");
       break;
       case 7:
       printf("grade-C");
       case 6:
       printf("grade-D");
       break;
       case 5:
       printf("grade-E");
       break;
       default:
       printf("you are fail or type right marks");

    }
    return 0;

}