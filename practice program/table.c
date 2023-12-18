/* wap to print multiplication table of any number*/


#include<stdio.h>
int main()
{
	int n,i;
	printf("enter the number of which u want to table");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		
		printf("table=%d\n",n*i);
	}
	return 0;
}
