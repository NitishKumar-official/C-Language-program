#include<stdio.h>
#define SIZE 5
int main()
{
    int arr[SIZE]={40,50,27,28,24};
 int i,j;
 for(i=0;i<SIZE;i++)
 {
    for(j=0;j<SIZE;j++)
    {
        if(arr[j]>arr[j+1])
        {
            int t;
            t=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=t;
        }
    }
    
 }
 for(i=0;i<SIZE;i++)
 {
    printf("%d\t",arr[i]);
 }   
}