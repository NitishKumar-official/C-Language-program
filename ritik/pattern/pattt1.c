/*#include<stdio.h>
int main()
{
    int i,j,n;
    printf("enter the value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        
        for(j=1;j<=i;j++)
        printf("%d",i);
        printf("\n");
        
    }
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int i,j,n;
    printf("enter the value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<n-i;j++)
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
int main()
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
    for(i=1;i<=n-1;i++)
    {
        
        for(j=1;j<=i;j++)
        printf(" ");
        for(j=1;j<=n-i;j++)
        printf("*");
        for(j=1;j<n-i;j++)
        printf("*");
        printf("\n");
        
    }
    return 0;
}