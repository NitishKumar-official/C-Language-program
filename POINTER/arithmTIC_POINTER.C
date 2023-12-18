#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,*pi=&a;
    char b,*pc=&b;
    float c,*pf=&c;
    printf("the address of a= the value of pi=%u\n ",pi);
    printf("the address of b= the value of pc=%u\n ",pc);
    printf("the address of c= the value of pf=%u\n ",pf);
pi++;
pc++;
pf++;
 printf("the address of a= the value of pi=%u\n ",pi);
    printf("the address of b= the value of pc=%u\n ",pc);
    printf("the address of c= the value of pf=%u\n ",pf);


    return 0;
}
