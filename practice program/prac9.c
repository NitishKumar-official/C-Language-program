#include<stdio.h>
int main(int argc, char const *argv[])
{
    float i1,i2,v1,v2,avg;
    int p1,p2;
    printf("enter the wight of item1 and no of purchase for item1");
    scanf("%f%d",&i1,&p1);
    printf("enter the wight of item2 and no of purchase for item2");
    scanf("%f%d",&i2,&p2);
    avg=((i1*p1)+(i2*p2))/(p1+p2);
    printf("%f",avg);

    return 0;
}
