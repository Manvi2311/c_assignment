# include <stdio.h>
int main()
{
    int n,rev=0,rem, num;
    printf("enter the number");
    scanf("%d",&n);
    num=n;
    for(num=n;n>0; )
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    
    if (rev==num)
    {
        printf("number is a palindrome %d",rev);
    }
    else
    {
        printf("it is not a palindrome");
    }
    return 0;
} 

    


