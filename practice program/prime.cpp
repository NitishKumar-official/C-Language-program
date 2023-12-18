#include<stdio.h>
#include<math.h>
void main()
{
	int i, num, flag=1;
	printf("enter the number for check prime");
	scanf("%d",&num);
	for(i=2;i<=sqrt(num);i++)
	{
		if(num%i==0)
		{
		printf("number is not prime number");
		flag=0;
		braek;
	}
	}
	if(flag==1)
	printf("number is prime");
	getch();
}
