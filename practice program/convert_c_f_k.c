#include<stdio.h>
int main(int argc, char const *argv[])
{
    float c, f,k;
    printf("enter the temperature in celcius");
    scanf("%2f",&c);
    f=9*c/5+32;
    k=c+273;
    printf("temp in forenhight=%2f",f);
    printf("temperature in kalvin=%2f",k);

    return 0;
}
