#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fptr;
    int id;
    char name[20];
    int sal;
    fptr=fopen("abc.txt","w+");
    if(fptr==NULL)
    {
        printf("file does exit");
        exit(1);
    }
    
        printf("Enter the id\n");
        scanf("%d",&id);
        fprintf(fptr,"id=%d",id);
        printf("enter the name\n");
        scanf("%s",name);
        fprintf(fptr,"name=%s",name);
        printf("enter the salary\n");
        scanf("%d",&sal);
        fprintf(fptr,"salary=%d",sal);
    fclose(fptr);
    
}