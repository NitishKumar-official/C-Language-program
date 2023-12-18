/*

wap to print ur name

#include<stdio.h>
void showdata(void);
void main(int argc, char const *argv[])
{
    showdata();
    return 0;
}
void showdata(void)
{
    printf("my name is nitish");
}*/

/* 
wap to add two numbers

#include<stdio.h>
void sumdata(int x,int y);
int main(int argc, char const *argv[])
{
    int a,b,sum;
    printf("enter a and b");
    scanf("%d%d",&a,&b);
    sumdata(a,b);
    return 0;
}
void sumdata(int x,int y)
{
    int sum;
    sum=x+y;
    printf("sum=%d",sum);
}*/

/*wap to find even or odd betwen two numbers
#include<stdio.h>
void EvenOdd(int n)
{
    
    if(n%2==0)
    printf("even");
    else
    printf("odd");
}
int main(int argc, char const *argv[])
{
    EvenOdd(2);
    return 0;
}*/

/*wap to find larger between two number*/

#include<stdio.h>
int compare(int x,int y)
{
if(x<y)
printf("x is greater");
else
printf("y is greater");
}
int main()
{
comapre(5,9);
return 0;
}
