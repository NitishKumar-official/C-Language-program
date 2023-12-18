/*wap to find the difference between two dates in years,months and day*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int d,d1,d2,m,m1,m2,y,y1,y2;
    printf("enter d1d1/m1m1/y1y1");
    scanf("%d%d%d",&d1,&m1,&y1);
    printf("d2d2/m2m2/y2y2");
    scanf("%d%d%d",&d2,&m2,&y2);
    if(d2<d1)
    if(m2==2)
    {
        if(y%4==0&&y%100==0||y%400)
        d2=d2+29;
        else
        d2=d2+28;
    }
    else if(m2==1||m2==3||m2==5||m2==7||m2==8||m2==10||m2==12)
    d2=d2+31;
    else
    d2=d2+30;
    if(m2<m1)
    {
        m2=m2+12;
        y2=y2-1;
    }
    d=d2-d1;
    m=m2-m1;
    y=y2-y1;
    printf("the diff of date=%d/%d/%d",d,m,y);
    return 0;
}
