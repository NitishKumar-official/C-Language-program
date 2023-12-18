#include<stdio.h>
#define SIZE 5
int main()
{
    int arr[SIZE],i,item,j;
    printf("enter array of element");
    for(i=0;i<SIZE;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<SIZE;i++)
    {
    item=arr[i];
    for(j=i-1;item<arr[j]&&j>=0;j--)
    {
        arr[j+1]=arr[j];
    }
    arr[j+1]=item;
    }
    printf("array is");
    for(i=0;i<SIZE;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}
