#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,n,sum=0,x=0,y=1;
    printf("enter the value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=x+y;
        x=y;
        y=sum;
        printf("%d\t",sum);
    }
    return 0;
}
