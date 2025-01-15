#include <stdio.h>
#define size 6
int main() {
    int a[size],i,j,l1,l2;
    printf("Enter %d values:\n",size);
    for(i=0;i<size;i++)
    { 
    scanf("%d",&a[i]);
    }
    l1=a[0];
    l2=a[1];
    for(i=0;i<size;i++)
    {
        printf("%d ",a[i]);
        if (a[i]>l1)
        {
            l2=l1;
            l1=a[i];
        }
        else if(a[i]>l2)
        {
            l2=a[i];
        }
    }
    printf("\ntwo max of all values of an array: %d  %d ",l1,l2);
    return 0;
}