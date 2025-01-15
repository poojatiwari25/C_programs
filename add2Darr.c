// Online C compiler to run C program online
#include <stdio.h>
#define r 3
#define c 2
int main() {
    int a[r][c],b[r][c],i,j,sum[r][c];
    printf("Enter %d values for matrix 1: ",r*c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
          scanf("%d",&a[i][j]); 
        }
    }
    printf("\nEnter %d values for matrix 2: ",r*c);
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
          scanf("%d",&b[i][j]); 
        }
    }
     printf("\nMatrix 1:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
          printf("%d ",a[i][j]); 
        }
         printf("\n");
    }
   
    printf("\nMatrix 2:\n");

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
          printf("%d ",b[i][j]); 
        }
        printf("\n");
    }
     printf("Matrix addition: \n");
    for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
      {
          sum[i][j]=a[i][j]+b[i][j];
          printf("%d ",sum[i][j]);
      }
      printf("\n");
    }
    return 0;
}