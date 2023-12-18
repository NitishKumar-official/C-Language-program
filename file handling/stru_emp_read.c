#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fptr;
    char buff[200];
    fptr=fopen("abc.txt","r");
    while(fscanf(fptr,"%s",buff)!=EOF);
    {
        printf("%s",buff);
    }
    fclose(fptr);
}