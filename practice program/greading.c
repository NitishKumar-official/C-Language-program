#include<stdio.h>
int main(int argc, char const *argv[])
{
    int marks;
    printf("enter your marks");scanf("%d",&marks);
    if(marks>=90)
        printf("your marks are excllent with grade A");
    else if (marks>=80)
        printf("your marks are very nice with grade B ");
    else if (marks>=70)
    printf("your marks are very good with grade C");
    else if(marks>=60)
    printf("your marks are good with grade D");
    else
    printf("better luck next time");
    return 0;
}
