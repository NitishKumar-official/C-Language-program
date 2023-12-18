#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a,year,weak,day;
    printf("enter the days");
    scanf("%d",&a);
    year=a/365;
    weak=(a%365)/7;
day=(a%365)%7;
    printf("%d\n",year);
    printf("%d\n",weak);
    printf("%d",day);
    return 0;
}
