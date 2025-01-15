#include <stdio.h>
#define size 8
int main() {
    int a[size],i,max,pos;
    printf("\nEnter %d values:",size);
    for(i=0;i<size;i++)
    { 
    scanf("%d",&a[i]);
    }
    max=a[0];
    pos=1;
    for(i=1;i<size;i++)
    {
        printf("%d ",a[i]);
        if (a[i]>max){
            max=a[i]; 
            pos=i+1;
        }
        
    }
    
    printf("\nmax of all values of an array is %d and found at position %d",max,pos);
    return 0;
}