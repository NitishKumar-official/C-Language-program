#include<stdio.h>
int mai()
{
    int l,b,a,p;
    printf("enter the number");
    scanf("%d%d",&l,&b);
    a=l*b;
    p=1/2*(l+b);
    printf("%darea=%d%dprimeter=%d",a,b);
    return 0;

}