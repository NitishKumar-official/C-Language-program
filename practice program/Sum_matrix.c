/*wap to print the sum of the array*/


#include<stdio.h>
#define ROW 3
#define COL 3
int main()
{
	int arr1[ROW][COL],arr2[ROW][COL],i,j,arr3[ROW][COL];
	printf("enter the element of arr1");
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		scanf("%d",&arr1[i][j]);
	}
	printf("enter the element of arr2");
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		scanf("%d",&arr2[i][j]);
	}
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		arr3[i][j]=arr1[i][j]+arr2[i][j];
		
	}
	printf("printf the sum of matrix:\n");
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		printf("%d\t",arr3[i][j]);
		printf("\n");
	}
	
	return 0;
	
}
