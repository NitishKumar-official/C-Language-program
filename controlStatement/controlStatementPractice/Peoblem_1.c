/*wap to check weather a date a valid or not between years 1850 and 2050*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int d,m,y,flag=1;
    printf("enter dd/mm/yy");
    scanf("%d%d%d",&d,&m,&y);
    if(y<=1850||y>=2050)
    flag=0;
    else if(m<1||m>12)
    flag=0;
    else if(d<1)
    flag=0;
    else if(m==2)
    {
        if(d>28)
        flag=0;
    }
    else if(m==4||m==6||m==9||m==11)
    if(d>30)
    flag=0;
    else if(d>31)
    flag=0;
    if(flag==0)
    printf("date is invalid");
    else
    printf("date is valid");
    return 0;
}
