#include<stdio.h>
#define SIZE 5
int main(int argc, char const *argv[])
{
    int i,j,arr[SIZE],min,temp;
    printf("enter the element of the array");
    for(i=0;i<SIZE;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<SIZE-1;i++)
    {
        min=i;
        for(j=i+1;j<SIZE;j++)
        {
            if(arr[j]<arr[min])
            min=j;
        }
        if(min!=i)
        {
         temp=arr[i];
         arr[i]=arr[min];
         arr[min]=temp;
        }
    }
    printf("selection short:\n");
    for(i=0;i<SIZE;i++)
    printf("%d",arr[i]);
    return 0;
}
