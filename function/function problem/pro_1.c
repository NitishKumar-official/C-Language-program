/*Program to convert a binary or octal number to a dec imal number*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num,base=1,result;
    char choice;
    printf("enter'b' for binary number and 'o' for octal number" );
    scanf("%c",&choice);
    printf("enter the number");
    scanf("%d",&num);
    if(choice=='b')
    base=2;
    else
    base=8;
    result=decimal(num,base);
    printf("the decimal of%d is %d",num,result);
    return 0;
}
int decimal(int n,int base)
{
int  rem,dec=0,j=1;
while(n>0){
    rem=n%10;
    dec=dec+j*rem;
    j=j*base;
    n=n/10;
}
return dec;
}


