#include <stdio.h>
#define size 8
int main() {
    int a[size],i,t;
    printf("Enter %d values: ",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<size/2;i++)
    {
        t=a[i];
        a[i]=a[size-1-i];
        a[size-1-i]=t;
    }
    printf("\n Reversed array is:");
    for(i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}