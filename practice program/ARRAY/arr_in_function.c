

/*wap to pass array elements to a function*/

#include<stdio.h>
int check(int n);
int main(int argc, char const *argv[])
{
    int i,arr[11];
    printf("enter the element for array");
    for(i=0;i<11;i++){
    scanf("%d",&arr[i]);}
check(arr[i]);
    return 0;
}
int check(int n)
{
    if(n%2==0)
    printf("num is even");
    else
    printf("no is odd");
}
