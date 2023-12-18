/*
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,n;
    printf("enter the value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    for(j=1;j<=n-i;j++)
    printf(" ");
    for(j=1;j<=i;j++)
    printf("*");
    for(j=1;j<i;j++)
    printf("*");
    printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,n;
    printf("enter the value of n");
    scanf("%d",&n);
    for(i=1;i<=2*(n+1-i);i++)
    {
    for(j=1;j<=n-i;j++)
    printf(" ");
    for(j=1;j<=i;j++)
    printf("*");
    for(j=1;j<i;j++)
    printf("*");
    printf("\n");
    }
    return 0;
}*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,n;
    printf("enter the value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    for(j=1;j<=n-i;j++)
    printf(" ");
    for(j=1;j<=i;j++)
    printf("%d",i);
    for(j=1;j<i;j++)
    printf("%d",i);
    printf("\n");
    }
    return 0;
}


