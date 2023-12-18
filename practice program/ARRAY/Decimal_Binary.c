#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,arr[15],i,j;
    printf("enter decimal number");
    scanf("%d",&n);
    i=0;
    while(n>0)
    {
        arr[i]=n%2;
        n=n/2;
        i++;
    }
    printf("the binary number is:\n");
    for(j=i-1;j>=0;j--)/*i-1 ka matlab hai last postion of array aur -1 is liye 
    iye qki array o postion se start hoa hai*/
    {
        printf("%d",arr[j]);
    }
    return 0;
}
