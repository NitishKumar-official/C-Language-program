#include<stdio.h>
int main(int argc, char const *argv[])
{
    int x,y,choice;
    
    
    printf("press 1.sum 2.sub 3.mul 4.div 5.modulus 6.exit");
    scanf("%d",&choice);
    
    printf("enter two number");
    scanf("%d%d",&x,&y);
   
    switch(choice)
    {
         case 1:
            printf("sum=%d",x+y);
            goto menu;
             case 2:
            printf("sub=%d",x-y);
            break;
             case 3:
            printf("mul=%d",x*y);
            break;
             case 4:
            printf("div=%d",x/y);
            break;
             case 5:
            printf("modulas=%d",x%y);
            break;
            
    }
     menu:
    printf("press 1.sum 2.sub 3.mul 4.div 5.modulus 6.exit");`
    return 0;
}
