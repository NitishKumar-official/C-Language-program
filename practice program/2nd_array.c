/*wap to find the minimum and maximam value from the array*/


#include<stdio.h>
#include<limits.h>
int main()
{
	int arr[5],i,max,max1;
	printf("enter the array of the element");
	for(i=0;i<5;i++)
	scanf("%d",&arr[i]);
	max1=max=INT_MIN;
	
	for(i=0;i<5;i++)
	{
		if(arr[i]>max)
		{
			max1=max;
	        max=arr[i];
	    }
		else if(arr[i]>max1 && arr[i]<max)
		max1=arr[i];
	}
		printf(" the second max is =%d",max1);
	

return 0;
	
}
