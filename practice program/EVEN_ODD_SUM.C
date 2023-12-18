/*wap to find sum of all even number and odd numbers between 0 to n*/

#include<stdio.h>
int main()
{
	int n,even=0,odd=0,i;
	printf("enter the number");
	scanf("%d",&n);
	i=0;
	while(i<=n)
	{
		if(i%2==0)
		even=even+i;
		else
		odd=odd+i;
		i++;
	}
	printf("sum of even=%d\t sum of odd=%d",even,odd);
	return 0;
}

