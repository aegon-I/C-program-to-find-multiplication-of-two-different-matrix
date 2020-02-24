#include"stdio.h"
int main()
{
   
    int i,j,x,y,m,n;
    float A[10][10] , B[10][10] ,C[10][10];
 int h=0;
    printf(" Enter the dimention is of First Metrix:\n Ex: m X n \n Enter 'm' and 'n' ");
    scanf("%d %d" ,&x,&y);

     printf("Enter the dimention is of Second Metrix:\n Enter 'm' and 'n' ");
    scanf("%d %d" ,&m,&n);

    if(y==m)
    {
   
    
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
        printf("Enter element A%d%d: " ,i+1,j+1);
        scanf("%f" ,&A[i][j]);
        }
    }

    printf("\n");
     printf("\n");

for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
        printf("Enter element B%d%d: " ,i+1,j+1);
        scanf("%f" ,&B[i][j]);
        }
    }
    
    for (int i = 0; i < x; i++)
    {
    for (int j = 0; j < n; j++)
    {
        for(int k=0; k<m;k++)
        {
            h = h + A[i][k] * B[k][j];
        }
        C[i][j]=h;
        h=0;
    }
    }
      printf("\n");
    printf("\n");

    printf("Sum of matrix is:\n");

    printf("\n");
    printf("\n");


for(i=0;i<x;i++)
    {
        for(j=0;j<n;j++)
        {
        printf("%0.2f\t" ,  C[i][j]);
         printf(" \n ");
        }
    }

    }


    else
    {
        printf("Matrix multiplication isn't posiible ");
    }
    

    return 0;

}