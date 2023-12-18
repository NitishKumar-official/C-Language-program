/*wap to print all natural number in reverse from n to 0 using while loop*/



#include<stdio.h>
int main()
{
	int n,i;
	printf("enter the number ");
	scanf("%d",&n);
	while(n>0)
	{
	printf("%d\t",n);
	n--;
}
	return 0;
}
