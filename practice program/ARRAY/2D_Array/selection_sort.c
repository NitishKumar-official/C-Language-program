#include<stdio.h>
int main()
{
    int arr[5]={12,13,8,6,37};
    int i,j,min;
    for(i=0;i<5;i++)
    {
        min=i;
        for(j=i+1;j<5;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
            
        }
        if(min!=i)
            {
                int t;
             t=arr[i];
                arr[i]=arr[min];
                arr[min]=t;
            }
    }
    for(i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }
}