#include <stdio.h>
#define size 8
int main() {
    int a[size],i,min,pos;
    printf("\nEnter %d values:",size);
    for(i=0;i<size;i++)
    { 
    scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=1;i<size;i++)
    {
        printf("%d ",a[i]);
        if (a[i]<min){
            min=a[i]; 
            pos=i+1;
        }
        
    }
     
    printf("\nmin of all values of an array is %d and found at position %d",min,pos);
    return 0;
}