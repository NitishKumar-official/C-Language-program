#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,count=0;
    printf("enter number");
    scanf("%d",&n);
    do{
        n/=10;
        count++;
    }
    while(n>0);
    {
        printf("Number of digits=%d",count);
    }
    return 0;
}
