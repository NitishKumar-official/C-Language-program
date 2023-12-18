
/*wap to search an element in array element*/


#include<stdio.h>
#define SIZE 15
int main(int argc, char const *argv[])
{
    int arr[15]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int item,i;
    printf("enter the item");
    scanf("%d",&item);
    for(i=0;i<15;i++)
    {
if(item==arr[i])
{
printf("%d is present in the array at %d position",item,i+1);
break;
    }
    else
    printf("element is not present in the array");
    return 0;
}
