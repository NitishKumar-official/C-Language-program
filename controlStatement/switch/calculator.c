#include<stdio.h>
int main(int argc, char const *argv[])
{
    int  x,y;
    char op;
    printf("plz enter first number , operator and second number");
    scanf("%d%c%d",&x,&op,&y);
    switch(op){
    case '+': 
    printf("result=%d",x+y);
    break;
    case '_': 
    printf("result=%d",x-y);
    break;
    case '*':
    printf("result=%d",x*y);
    break;
    case  '/':
    printf("result=%d",x/y);
    }
    return 0;
}
