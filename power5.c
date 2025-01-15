#include <stdio.h>
#include<math.h>
int main() {
   int x,n,i,j;
   double p1=0,p2=0,p3;
    printf("enter the value of x: ");
    scanf("%d",&x); 
   printf("enter the value of n: ");
    scanf("%d",&n); 
    for(i=1;i<=n;i=i+4)
    {
      p1=p1+pow(x,i);
    }
    for(j=3;j<=n;j=j+4){
          p2=p2+pow(x,j);
    }
    p3=p1-p2;
    printf("\n Result is %.01f",p3);
    

    return 0;
}



