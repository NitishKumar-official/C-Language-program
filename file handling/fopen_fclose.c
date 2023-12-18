#include<stdio.h>
int main()
{
    FILE *fp;
    char ch;
    printf("data input");
    fp=fopen("nitish.txt","r");
    while(1)
    {
        ch=fgetc(fp);
        if(ch==EOF)
        break;
        printf("%c",ch);
    }
    fclose(fp);
    }