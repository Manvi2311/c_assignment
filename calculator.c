#include<stdio.h>
int main()
{
    char operation;
    double n1,n2;
    
    printf("enter an operator(+,-,*,/,=):");
    scanf("%c",&operation);
    printf("enter two operands");
    scanf("%lf%lf",&n1,&n2);
    switch(operation)
    {
         case'+':
        printf("%.1lf+%.1lf=%.1lf",n1,n2,n1+n2);
        break;
        case'-':
        printf("%.lf-%.1lf=%.1lf",n1,n2,n1-n2);
        break;
        case'*':
        printf("%.1lf*%.1lf=%.1lf",n1,n2,n1*n2);
        break;
        case'/':
        printf("%.1lf/%.1lf=%.1lf",n1,n2,n1/n2);
        break;
        case'=':
        printf("%.1lf=%.1lf",n1,n2,n1=n2);
        break;
        default:
        printf("add an operator");
    }
    return 0;
 }
