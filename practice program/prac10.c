#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,c;
    printf("enter three  numbers");
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b&&a>=c){printf(" %d  is the greater ",a);}
    else if(b>=a&&b>=c){printf(" %d  is the greater", b);}
    else{printf(" %d  is greater",c);}
    return 0;
}
