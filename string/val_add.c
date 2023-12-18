

/*Program to print characters of a string and address of each character*/

#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char str[]="india";
    int i;
    for(i=0;str[i]!='\0';i++)
    {
        printf("character=%c\t and address=%u\n",str[i],&str[i]);
    }

    return 0;
}
