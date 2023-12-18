/*wap in c to search any integer value from given array*/


#include<stdio.h>
int main()
{
	int arr[10],i,item;
	printf("enter the array of element");
	for(i=0;i<10;i++)
	scanf("%d",&arr[i]);
	printf("enter the item to be search");
	scanf("%d",&item);
	for(i=0;i<10;i++)
	{
		if(item==arr[i])
		{
		
		printf("%d is present at the %d position of an array",item,i);
		break;
	}
	}
	return 0;
}
