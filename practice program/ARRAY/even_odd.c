   
   
   /*wap to count no of even and no of odd*/
   
   
   #include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,arr[5],even=0,odd=0;
    for(i=0;i<5;i++)
    {
        printf("enter the number for arr[%d]\n",i);
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        even++;
        else
        odd++;
    }
    printf("even=%d and odd=%d",even,odd);

    return 0;
}
