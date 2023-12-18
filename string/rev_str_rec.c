#include<stdio.h>
 void rev_str();
int main()
{
 rev_str();
 return 0;
}
void rev_str()
{
    char c;
    printf("enter the string");
    scanf("%c",&c);
    if(c!='\n')
    {
      rev_str();
      printf("%c",c);
    }
}