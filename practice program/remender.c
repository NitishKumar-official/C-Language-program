#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n ,rem;
    printf("enter the 5 digit number");
    scanf("%d",&n);
    rem=n%3;
    printf("remender is=%d",rem);
    return 0;
}
