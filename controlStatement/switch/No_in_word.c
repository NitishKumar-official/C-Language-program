


/*wap to accept any number up to six digit and print that in words using switch statement*/


#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num,rem,sum=0;
    printf("enter number upto 6 digit");
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%10;
        sum=sum*10+rem;
        num=num/10;
    }
    while(sum!=0)
    {
        rem=sum%10;
        switch(rem)
        {
             case 0:
            printf("zero\t");
            break;
            case 1:
            printf("one\t");
            break;
             case 2:
            printf("two\t");
            break;
             case 3:
            printf("three\t");
            break;
             case 4:
            printf("four\t");
            break;
             case 5:
            printf("five\t");
            break;
             case 6:
            printf("six\t");
            break;
             case 7:
            printf("seven\t");
            break;
             case 8:
            printf("eight\t");
            break;
             case 9:
            printf("nine\t");
            break;
        }
        sum=sum/10;
    }
    return 0;
}
