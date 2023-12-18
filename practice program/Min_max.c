/*wap to find the minimum and maximam value from the array*/


#include<stdio.h>
int main()
{
	int arr[10],i,max,min;
	printf("enter the array of the element");
	for(i=0;i<10;i++)
	scanf("%d",&arr[i]);
	min=max=arr[0];
	for(i=0;i<10;i++)
	{
		if(arr[i]<min)
		min=arr[i];
	if(arr[i]>max)
	max=arr[i];
}
printf("min=%d\t  and max=%d",min,max);
return 0;
	
}
