#include<stdio.h>
 int main()
{
	int a=20;
	int b=20;
	int c=20;
	if((a>=b)&&(a>=c))
	printf("%d\n",a);
	if((b>=a)&&(b>=c))
	printf("%d\n",b);
	if((c>=a)&&(c>=b))
	printf("%d\n",c);
}
