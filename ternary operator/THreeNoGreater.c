#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,c;
    printf("enter the three number");
    scanf("%d%d%d",&a,&b,&c );
    if(a>=c){
        if(a>=b)
        {
            printf("a is greater");
        }
        else{
            printf("b is grester");
        }
    } else if (b>c)
    {
        printf("b is greater");
    }
    else{
        printf("c is greater");
    }

    return 0;
}
