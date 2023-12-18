#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    FILE*fp=NULL;
    char str[50];
    int a=10;
    char ch='s';
    int i;
    fp=fopen("abc.text","w");
    if(fp=NULL)
    {
        printf("error");
        exit(1);
    }
}