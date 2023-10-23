#include<stdio.h>
int main()
{
    int n1,n2,sum=0;
    printf("enter number");
    scanf("%d",&n1);
    printf("enter number2");
    scanf("%d",&n2);
    while (n1<=n2)
    {
        sum=sum+n1;
        n1++;
    }
    
    printf("sum is %d",sum);
    return 0;
}