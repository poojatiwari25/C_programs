#include <stdio.h>
#define r 3
#define c 2
int main() {
    int a[r][c],i,j;
    printf("Enter %d values: ",r*c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
          scanf("%d",&a[i][j]); 
        }
    }
    printf("All values are:\n");
    for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
      {
         printf("%d ",a[i][j]); 
      }
    printf("\n");
    }
    return 0;
}