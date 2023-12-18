
/*wap to enter and show the array element*/

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int arr[5],i;
    for(i=0;i<5;i++){
        printf("enter the array element for arr[%d]",i );
        scanf("%d",&arr[i]);
    }
    printf("the array element are\n");
    for(i=0;i<5;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}
