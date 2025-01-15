#include <stdio.h>
#define r 2
#define c 5
int main() {
    int a[r][c],i,j,t;
    float per;
    printf("Enter %d marks for %d students:",c,r);
    for(i=0;i<r;i++)
    {
        printf("Student %d\n:",i+1);
        for(j=0;j<c;j++)
        {
          scanf("%d",&a[i][j]); 
        }
    }
    printf("Result of all stdents:-");
    for(i=0;i<r;i++)
    { 
        t=0;
        printf("\nStudent %d:-",i+1);
        for(j=0;j<c;j++)
        {
          printf("%d ",a[i][j]); 
          t=t+a[i][j];
        }
        per=(float)t/c;
        printf("\n Total marks \t: %d",t);
        printf("\n Percentage \t: %.2f",per);
    }
    return 0;
}