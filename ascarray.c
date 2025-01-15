#include<stdio.h>
#define size 8
int main()
{
    int a[size],i,j,t;
    printf("Enter %d values:",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<size;i++)
    {
       for(j=0;j<size;j++)
       {
           if (a[j]>a[j+1])
           {
               t=a[j];
               a[j]=a[j+1];
               a[j+1]=t;
           }
        }
    }
    printf("\n Sorted array is:");
       for(i=0;i<size;i++)
        {
           printf("%d ",a[i]);
        }
    return 0;
}