#include<stdio.h>
int main()
{
    int a,b,c,d,x,y,e;
	printf("Enter a four digit number : ");
	scanf("%5d", &x);
	
	a=(x/10000)%10;
	b=(x/1000)%10;
	c=(x/100)%10;
	d=(x/10)%10;
	e=x%10;
	y=((a+1)%10)*10000+((b+1)%10)*1000+((c+1)%10)*100+((d+1)%10)*10+(e+1)*1;
		printf("%d\n",y);
    return 0;
}

#include<stdio.h>
int main ()
{
    int a,b,c,d,x;
	printf("Enter a four digit number : ");
	scanf("%4d", &x);
	a=(x/1000)%10;
	b=(x/100)%10;
	c=(x/10)%10;
	d=x%10;
	
	printf("\nThe sum of %d and %d is %d",a,d, a+d);

    return 0;
}

#include <stdio.h>

int main() {
     int age;
     char ms,x,g;
     printf("Enter the mariatal status of driver:= M:Married,U:Unmarried :");
     scanf("%c",&ms);

     printf("Enter the gender of driver:= m:Male,f:female : ");
       scanf("%c%c",&x,&g);

      printf("Enter the age of driver : ");
     scanf("%d",&age);
     
     if(ms=='M'){
         printf("driver is married");
      }
      else if(ms=='U',g=='m',age>30){
         printf("you are able to insure");
     }
     else if(ms=='U' ,g=='f',age>25){
         printf("she can insure");
     }
     else{
         printf("not in criteria");
     }
    return 0;
}


#include <stdio.h>

int main() {
    int i=1,n,p;
    printf("Enter a number");
    scanf("%d",&n);
   for(i=1;i<=10;i++)
   {
        p=n*i;
        printf("%d\n",p);
    }
    return 0;
}


// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int n=1;
   while(n<=100){
   n++;
   
      if(n%2==0)
           printf("\n%d",n);
   }
    return 0;
}

#include <stdio.h>

int main() {
    int n,i=1,p;
    printf("enter any number");
    scanf("%d",&n);
      while(i<=20){
         p=n*i;
         printf("\n%d",p);
     i=i+2;
    }
return 0;
}

#include <stdio.h>

int main() {
   int n=1;
   while(n<=100){
   n++;
   
      if(n%2==0)
           printf("\n%d",n);
   }
    return 0;
}

#include <stdio.h>

int main() {
   int i,n,s=0;
   printf("enter any number");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
         s=s+i; 
   }
    printf("\n%d",s);
    return 0;
}

#include <stdio.h>

int main() {
    int n,r;
    printf("enter any number");
    scanf("%d",&n);
    while(n>0)
    {
     r=n%10;
     printf("%d",r);
     n=n/10;
    }
    
return 0;
}


// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n,r,rem,org;
    printf("enter any number");
    scanf("%d",&n);
    org=n;
    printf("original no is: %d\n",org);

    while(n>0)
    {
     rem = n%10;
     r=(r*10)+rem;
     n=n/10;
     
    }
    printf("reverse no is: %d\n",r);
    if (org==r)
        printf("\nboth are equal");
    else
        printf("\nnot equal");
return 0;
}


// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n,r,rem,c;
    printf("enter any number");
    scanf("%d",&n);
    c=n;
    while(n>0)
    {
     rem = n%10;
     r=(r*10)+rem;
     n=n/10;
     
    }
    if (c==r)
        printf("\npalindrome");
    else
        printf("\nnot palindrome");
return 0;
}





// function prime
#include <stdio.h>

int prime(int a, int b)
{
int i,j;
for(i=a+1;i<b;i++){
   int c=0;
  for(int j=2;j<i;j++)
  {
      if(i%j==0)
      {
      c++;
        break;
      }
   } 
      if(c==0){
         printf("%d\n",i); 
         
     }
     
}
return 0;
}
int main() {
 int a,b;
printf("enter 1st no.");
scanf("%d",&a);
printf("enter last no.");
scanf("%d",&b); 
  prime(a,b);
return 0;

}


//function power

#include <stdio.h>
int power(int x,int n)
{
    double p1=1;
for(int i=1;i<=n;i++)
{
    p1=p1*x;
} 
  printf("\n%d to the power of %d is %.01f",x,n,p1);
if(p1==0)
  printf("1");
return 0;
}
int main() {
 int x,n;
double p1=1;
printf("enter the value of x: ");
scanf("%d",&x); 
printf("enter the value of n: ");
scanf("%d",&n); 
power(x,n);
return 0;

}



// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    if(n<0){
        n=-n;
    }
    printf("The absolute value of %d",n);
    return 0;
}