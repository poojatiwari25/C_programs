#include <stdio.h>
#include<math.h>
int main() {
int x,n,i,j;
double p1=0,p2=0,p3;
printf("enter the value of x: ");
scanf("%d",&x); 
printf("enter the value of n: ");
scanf("%d",&n); 
int a=1,b=2;
for(i=4;i<=n;i=i+4)
{
a=a*i;
p1=p1+(pow(x,i)/a);
a+=4;
} 
b=b*i;
for(j=2;j<=n;j=j+4){
p2=p2+(pow(x,j)/b);
b+=4;
}
p3=1-p1-p2;
printf("\n Result is %.01f",p3);
return 0;
}


//1-(1*1*1/6)+(1*1*1*1*1/120)-(1*1*1*1*1*1*1/5040)+(1/362880)=