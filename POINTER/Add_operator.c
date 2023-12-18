/*wap to print address of variable using address operator*/



#include<stdio.h>
int main(int argc, char const *argv[])
{
    int age=30;
    float sal=1500.50;
    printf("value of age=%d  and address of age=%u\n",age,&age);
     printf("value of sal=%f  and address of age=%u\n",sal,&sal);
    return 0;
}
