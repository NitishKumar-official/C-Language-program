#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n, rem,sum=0;
    printf("enter the number");
    scanf("%d",&n);
    for(;n>0;n/=10)
    {
        rem=n%10;
        sum+=rem;

    }printf("%d",sum);
    return 0;
}
