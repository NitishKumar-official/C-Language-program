// w.a.p to perform artimetic operation using switch case?
#include<stdio.h>
int main()
{
    int a,b,c,ch;
    printf("enter two num");
    scanf("%d%d",&a,&b);

    printf("enter ch");
    scanf("%d",&ch);
    
    switch(ch)
    {
        case 1:c=a+b;
        printf("%d",c);
        break;
        case 2:c=a-b;
        printf("%d",c);
        break;
        case 3:c=a*b;
        printf("%d",c);
        break;
        case 4:c=a/b;
        printf("%d",c);
        break;
        default:printf("invalide choice");
}
}