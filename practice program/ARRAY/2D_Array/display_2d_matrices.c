


/* wap to input and dislay a matrix*/



#include<stdio.h>
#define ROW 3
#define COL 4
int main(int argc, char const *argv[])
{
    int i,j,mat[ROW][COL];
    printf("enter the number of matrix(%d*%d), row wise\n",ROW,COL);
    for(i=0;i<ROW;i++)
        for(j=0;j<COL;j++)
        scanf("%d",&mat[i][j]);
     printf("matrix which u enter\n");
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        printf("%d",mat[i][j]);
        printf("\n");
    }
    printf("\n");
    return 0;
}
