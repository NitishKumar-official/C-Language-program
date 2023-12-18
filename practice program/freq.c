#include<stdio.h>
int main()
{
    int arr[]={4,5,6,4,3,4,4,1,3,5,5,3,0,0,2,2,1,1};
    int s=sizeof(arr)/sizeof(int);
    int i,j,c,num;
   
    for(i=0;i<s;i++)
    {   num=arr[i];
        for(j=0;j<s;j++)
        {
            if(num==arr[j])
            {
                c++;
            }
            
        }
        printf("Frequency of %d = %d\n",arr[i],c);
        c=0;
    }
}