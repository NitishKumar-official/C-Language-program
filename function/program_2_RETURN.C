/*first use of return*/
/*
#include<stdio.h>
void eligiblity(int age, int hig);
int main()
{
    int age,hig;
    printf("enter the age and hig");
    scanf("%d%d",&age,&hig);
    eligiblity(age,hig);
    return 0;
}
void eligiblity(int age,int hig)
{
    if(age>25){
    printf("sorry better luck next time");
    return;}
    else if(hig>8){
    printf("opps u are not lucky");
    return;}
    else
    printf("congrates");
    return;
}*/


/*SECOND USE OF RETURN*/
#include<stdio.h>
 int Compare_Date(int d1,int m1,int y1,int d2, int m2,int y2);
 int main(int argc, char const *argv[])
 {
    int d1,d2,m1,m2,y1,y2;
    printf("enter d1d1/m1m1/y1y1 and d2d2/m2m2/y2y2");
    scanf("%d%d%d%d%d%d",&d1,&m1,&y1,&d2,&m2,&y2);
    Compare_Date(d1,m1,y1,d2,m2,y2);
    return 0;
 }
  int Compare_Date(int d1,int m1,int y1,int d2, int m2,int y2)
{
    if(y1<y2)
    return 1;
    /*if(y1>y2)
    return -1;
    if(m1<m2)
    return 1;
    if(m1>m2)
    return -1;
    if(d1<d2)
    return 1;
    if(d1>d2)
    return -1;*/   
}
 
