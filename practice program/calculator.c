/*wap to perform calculator*/
#include<stdio.h>
void main()
{
	int x,y,choice;
	printf("enter 1.add, 2.sub, 3.mul, 4.div, 5.mod\n");
	printf("enter your choice");
	scanf("%d",&choice);
	printf("enter x and y");
	scanf("%d%d",&x,&y);
	switch(choice)
	{
		case 1:printf("add=%d",x+y);
		       break;
		case 2:printf("sub=%d",x-y);
			   break;
	    case 3:printf("mul=%d",x*y);
	           break;
	    case 4:printf("div=%d",x/y);
		       break;
		case 5:printf("mod=%d",x%y);
		       break;
		         			
	}
	getch();
}
