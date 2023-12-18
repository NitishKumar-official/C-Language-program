#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n, fact=1;
    printf("enter the number for factorial");
    scanf("%d",&n);
    while(n>1){
    fact=fact*n;
    n--;}
    printf("the factorail=%d",fact);

    return 0;
}
