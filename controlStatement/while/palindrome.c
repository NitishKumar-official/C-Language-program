#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,temp,rem,sum=0;
    printf("enter the number");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        rem=n%10;
        sum=(sum*10)+rem;
        n=n/10;
    }
    if(temp==sum)
    printf("number is palindrome");
    else
    printf("number is not palindrome");
    return 0;
}
