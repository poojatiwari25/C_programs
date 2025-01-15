#include <stdio.h>

int main() {
    int a[5],b[5],sum[5],i;
    printf("Enter first array element:");
    for(i=0;i<5;i++)
    {
         scanf("%d",&a[i]);
    }
    printf("\nEnter second array element:");
     for(i=0;i<5;i++)
    {
         scanf("%d",&b[i]);
    }
    for(i=0;i<5;i++)
    {
        sum[i] = a[i]+b[i];
        printf("\n third array element at index %d is %d",i,sum[i]);
    }
    return 0;
}