#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,n,term=1,sum=0;
    printf("enter the term for sum");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        sum=sum+term;
        term=term+i;
       
    } printf("%d",sum);
    return 0;
}
