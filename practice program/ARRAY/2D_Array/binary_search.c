#include<stdio.h>
#define SIZE 5
int main(int argc, char const *argv[])
{
    int arr[SIZE],item,mid,first,last,i;
    printf("enter the element of the array\n");
    for(i=0;i<SIZE;i++)
    scanf("%d",&arr[i]);
    printf("enter the item");
    scanf("%d",&item);
    first=0;
    last=SIZE-1;
    mid=(first+last)/2;
    while(first<=last)
    {
        if(arr[mid]<item)
        first=mid+1;
        else if(arr[mid]==item)
        {
            printf("%d found at location %d\n",item,mid+1);
            break;
        }
        else
        {
        last=mid-1;
        mid=(first+last)/2;
        }
        if(first>last)
        printf("not found");
    }
    return 0;
}
