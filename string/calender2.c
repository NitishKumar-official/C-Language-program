#include<stdio.h>
#include<stdlib.h>
int main()
{
system("color 3F");
int year,month;
printf("enter your desired year:\n");
scanf("%d",&year);
char *months[]={"januaray","february","march","april","may","june","july","august","september","october","november","december"};
for(month=0;month<=12;month++)
{
    printf("\n\n--------------------%s-----------------------",months[month]);
    printf("\n  sun  mon  tue  wed  thu  fri  sat");
    
}

}