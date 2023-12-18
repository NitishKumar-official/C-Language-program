#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,num,rem,sum=0,d;
    
    for(num=100;num<=999;num++)
    {
        i=num;
        while (i>0)
        {
        rem=i%10;
        d=rem*rem*rem;
        sum=sum+d;
        i=i/10;
        }
        if(num==sum)
        printf("armstrong no is=%d",num);
    }

    return 0;
}
