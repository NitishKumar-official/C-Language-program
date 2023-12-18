#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,pro=1,rem;
    printf("enter the number");
    scanf("%d",&n);
    while(n>0){
        rem=n%10;
        pro=pro*rem;
        n=n/10;
    }
     printf("pro=%d",pro);
    return 0;
}
