#include <stdio.h>

int main() {
   int x,n,i;
   double p1=1;
    printf("enter the value of x: ");
    scanf("%d",&x); 
   printf("enter the value of n: ");
    scanf("%d",&n); 
    for(i=1;i<=n;i++)
    {
        p1=p1*x;
    }
    
    printf("\n%d to the power of %d is %.01f",x,n,p1);

    return 0;
}