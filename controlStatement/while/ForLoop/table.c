#include<stdio.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
    
    int i,n,table;
    
    printf("enter no which u want table");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        table=n*i;

        printf("%d*%d=%d\n",n,i,table);
    }
    return 0;
}
