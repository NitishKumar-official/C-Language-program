#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter number");
    scanf("%d",&n);
    while(n>=0)
    printf("%d\n",n--);
    return 0;
}
