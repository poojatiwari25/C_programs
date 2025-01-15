#include <stdio.h>
#include<math.h>
int main() {
    int x,n,i,j,a=1,b=1,f=1,f1=1;
    double p1=0,p2=0,p3;
    printf("enter the value of x: ");
    scanf("%d",&x); 
    printf("enter the value of n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
     { 
          a=a*i;
          printf("a is %d\n",a);
     }
     printf("a is %d\n",a);
     for(j=1;j<=n;j++)
     { 
          b=b*i;
          printf("b is %d\n",b);
     }
     printf("b is %d\n",b);
    for(i=1;i<=n;i=i+4)
    {   
      p1=p1+pow(x,i)/f;
          f+=4;
    }
     printf("%f\n",p1);
     
    for(j=3;j<=n;j=j+4)
    {
          p2=p2+pow(x,j)/f1;
          f1+=4;
          
    }
    
     printf("%f\n",p2);
    p3=p1-p2;
    printf("\n Result is %.02f",p3);
return 0;
}



