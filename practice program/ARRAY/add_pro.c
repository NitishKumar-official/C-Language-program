   
   /*wap to add an array element*/
   
   #include<stdio.h>
int main(int argc, char const *argv[])
{
    int i, arr[5],sum=0;
    
    for(i=0;i<5;i++){
        printf("enter the elemen for arr[%d]",i);
    scanf("%d",&arr[i]);
       sum=sum+arr[i];}
printf("sum=%d",sum);
    return 0;
}
