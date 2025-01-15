#include <stdio.h>
#define size 8
int main() {
    int a[size],i,sum=0;
    float avg;
    printf("\nEnter %d values:",size);
    for(i=0;i<size;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("\nAll values are:");
    for(i=0;i<size;i++)
    {
        printf("%d ",a[i]);
        sum = sum+a[i];
    }
    avg= (float)sum/size;
    printf("\nsum of all values of an array: %d",sum);
    printf("\naverage of all values of an array: %.2f",avg);
    return 0;
}