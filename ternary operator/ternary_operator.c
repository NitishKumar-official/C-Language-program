#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,value;
    printf("enter the value of a and b");
    scanf("%d%d",&a,&b);
   value=a>b?a+b:a-b;
    printf("value=%d",value);

    return 0;
}
