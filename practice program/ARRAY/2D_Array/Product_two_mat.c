/*wap to product of two matrices*/

#include<stdio.h>
#define ROW 2
#define COL 2
int main(int argc, char const *argv[])
{
    int i,j,k,mat1[ROW][COL],mat2[ROW][COL],mat3[ROW][COL],sum=0;
    printf("enter the element of matr1:");
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        scanf("%d",&mat1[i][j]);
    }
    printf("enter the element of matr2:");
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        scanf("%d",&mat2[i][j]);
    }

    for(i=0;i<ROW;i++)
     for(j=0;j<COL;j++)
     {
        sum=0;
        for(k=0;k<ROW;k++)
        {
          sum=sum+mat1[i][k]*mat2[k][j];
          mat3[i][j]=sum;  
        }

     }
     printf("multiplication is\n");
     for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        printf("%d\t",mat3[i][j]);
        printf("\n");
    }
    return 0;
}
