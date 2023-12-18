#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE*fptr;
    int ch;
    fptr=fopen("abc.txt","w+");
    if(fptr==NULL)
    {
        printf("file does not exist");
        exit(1);
    }
    else
    {
        printf("enter txt\n");
        while(ch==getchar()!=EOF)
        fputc(ch,fptr);
        char ch1;
        ch1=fgetc(fptr);
        while(ch!=EOF)
        {
            printf("%c",ch1);
        } 
    }
fclose(fptr);
return 0;

}