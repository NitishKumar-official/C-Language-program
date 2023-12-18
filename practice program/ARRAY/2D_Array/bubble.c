/*wap to bubbleshort


#include<stdio.h>
#define SIZE 5
int main(int argc, char const *argv[])
{
    int i,j,arr[SIZE],temp;
    printf("enter the element of array for bubble short");
    for(i=0;i<SIZE;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<SIZE-1;i++)
    {
        for(j=0;j<SIZE-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
              temp=arr[j];
              arr[j]=arr[j+1];
              arr[j+1]=temp;
            }
        }
    }
    printf("sorted array");
    for(i=0;i<SIZE;i++)
printf("%d\t",arr[i]);

    return 0;
}
*/













#include<stdio.h>
#define SIZE 5
int main()
{
    int arr[SIZE];
    int i,j,temp;
    printf("enter the array of element");
    for(i=0;i<SIZE;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<SIZE-1;i++)
    {
        for(j=1;j<(SIZE-1-i);j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }

        }
    }
    printf("sorted array is\n");
    for(i=0;i<SIZE;i++)
    {
        printf("%d\t",arr[i]);
    }
}











