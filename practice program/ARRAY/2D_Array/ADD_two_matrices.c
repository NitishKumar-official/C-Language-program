/*WAP TO ADD TWO MATRICES*/



#include<stdio.h>
#define ROW 3
#define COL 4
int main(int argc, char const *argv[])
{
    int mat1[ROW][COL],mat2[ROW][COL],mat3[ROW][COL],i,j;
    printf("enter the number for mat1(3*4)");
    for(i=0;i<ROW;i++)
    for(j=0;j<COL;j++)
    scanf("%d",&mat1[i][j]);
    printf("enter the number for mat2(3*4)");
    for(i=0;i<ROW;i++)
    for(j=0;j<COL;j++)
    scanf("%d",&mat2[i][j]);
    /*addition*/
    
for(i=0;i<ROW;i++)
    for(j=0;j<COL;j++)
    mat3[i][j]=mat1[i][j]+mat2[i][j];

    printf("the resultant matrix\n");
    for(i=0;i<ROW;i++)
    {
    for(j=0;j<COL;j++)
    printf("%d\t",mat3[i][j]);
printf("\n");
    }
    return 0;
}

