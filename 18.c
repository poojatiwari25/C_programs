#include <stdio.h>
#include<math.h>
int main() {
int x,n,i;
double p1=0;
printf("enter the value of x: ");
scanf("%d",&x); 
printf("enter the value of n: ");
scanf("%d",&n); 
int a=1;
for(i=1;i<=n;i++)
{
p1= p1+(double)x/a;
printf("\n x is %d",x);
printf("\n a is %d",a);
a+=1;

} 
printf("\n Result is %.3f",p1);
return 0;
}