/*wap to find the number of notes required to a given amount of money*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,notes,choice;
    printf("enter the amount");
    scanf("%d",&n);
    printf("enter choice");
    scanf("%d",&choice);
switch (choice)
{
default:
printf("enter only valid values");
break;

case 2000:
notes=n/2000;
printf("2000 note=%d\n",notes);
n=n%2000;
case 500:
notes=n/500;
printf("500 notes=%d\n",notes);
n=n%500;
case 100:
notes=n/100;
printf("100 notes=%d\n",notes);
n=n%100;
case 50:
notes=n/50;
printf("50 notes=%d\n",notes);
n=n%50;
case 20:
notes=n/20;
printf("20 notes=%d\n",notes);
n=n%20;
case 10:
notes=n/10;
printf("10 notes=%d\n",notes);
n=n%10;
case 5:
notes=n/5;
printf("5 notes=%d\n",notes);
n=n%5;
case 1:
notes=n/1;
printf("1 notes=%d\n",notes);
}
printf("\n");
    return 0;
}
