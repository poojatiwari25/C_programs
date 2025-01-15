#include <stdio.h>
#include<math.h>
int main() {
   int x,n,i;
   double p1=0;
    printf("enter the value of x: ");
    scanf("%d",&x); 
   printf("enter the value of n: ");
    scanf("%d",&n); 
    for(i=1;i<=n;i=i+2)
    {
        p1=p1+pow(x,i);
    }
    
    printf("\n Result is %.01f",p1);

    return 0;
}