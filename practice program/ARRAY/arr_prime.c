#include<stdio.h>
int main(int argc, char const *argv[])
{
    int arr[100],i,flag=0;
    printf("the prime no between 1-100:\n");
    for(i=0;i<100;i++)
{
    scanf("%d",&arr[i]);
    if(arr[i]%2==0)
    flag=0;
    else
    flag=1;
    if(flag==1)
    printf("%d\t ",arr[i]);

    }
    return 0;
}
