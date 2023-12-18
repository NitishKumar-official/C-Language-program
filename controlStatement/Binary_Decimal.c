#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,nsave,rem,dec=0,j=1,d;
    printf("enter the number");
    scanf("%d",&n);
    nsave=n;
    while (n>0)
    {
        rem=n%10;
        d=rem*j;
        dec=dec+d;
        j*=2;
        n/=10;
    }printf("the decimal value of  =%d%d",nsave,dec);
    
    return 0;
}
