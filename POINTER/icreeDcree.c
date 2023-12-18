

/*Program to understand the postfix/prefix increment/decrement· in
a pointer variable of base type int*/


#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a=5, *pi=&a;
    printf("the address of a= the vale of pi=%u\n",pi);
    printf("the value of pi=%d\n",pi++);
     printf("the value of pi=%d\n",++pi);
      printf("the value of pi=%d\n",--pi);
       printf("the value of pi=%d\n",pi--);

    return 0;
}
