/*wap to print max and min in given number of aaray */


#include<stdio.h>
int main(int argc, char const *argv[])
{
    
    int max,min,i;
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    min=max=arr[0];
    for(i=0;i<10;i++)
    {
    if(arr[i]<min)
    min=arr[i];
    if(arr[i]>max)
    max=arr[i];
    }
    printf("max=%d min=%d",max,min);
    return 0;
}
