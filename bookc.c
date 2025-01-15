#include <stdio.h>

int main() {
    int a,b,c;
    printf("Enter 1st no.");
    scanf("%d",&a);
    printf("Enter 2nd no.");
    scanf("%d",&b);
    c=a+b;
    printf("%d",c);

    


    int a,b,c,total;
    printf("Enter 1st subject");
    scanf("%d",&a);
    printf("Enter 2nd subject");
    scanf("%d",&b);
    printf("Enter 3rd subject");
    scanf("%d",&c);
    total=a+b+c;
    printf("%d",c);

    
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    if(n%2==0)
       printf("Even number");
     else
       printf("odd number");

    



    int year;
    printf("Enter a year :");
    scanf("%d",&year);
    if(year%4==0)
       printf("Leap year");
     else
       printf("not a leap year");

   
    int i;
    for(i=1;i<=10;i++)
    {
      if(i%2!=0)
       printf("%d\n",i);
    }
   



    int i;
    for(i=10;i>=1;i--)
    {
       printf("%d\n",i);
    }
   



    char ch;
    printf("Enter any character: ");
    scanf("%c",&ch);
    printf("%c\n",ch);
     


    int a,b,c;
    printf("Enter 1st no: ");
    scanf("%d",&a);
    printf("Enter 2nd no: ");
    scanf("%d",&b);
    printf("Before Swapping: %d %d",a,b);
    c=a;
    a=b;
    b=c;
    printf("\nAfter Swapping: %d %d",a,b);
     

    int a,b,c;
    printf("Enter 1st no: ");
    scanf("%d",&a);
    printf("Enter 2nd no: ");
    scanf("%d",&b);
    printf("Before Swapping: %d %d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nAfter Swapping: %d %d",a,b);
    


    int a,b,c;
    printf("Enter 1st no: ");
    scanf("%d",&a);
    printf("Enter 2nd no: ");
    scanf("%d",&b);
    c=a+b;
    printf("%d",c);
   


    int f,c;
    printf("Enter temperature in f: ");
    scanf("%d",&f);
    c=(f-32)*5/9;
    printf("%d",c);
     

   
    int n;
    printf("Enter a no: ");
    scanf("%d",&n);
    if(n>0)
       printf("no. is positive");
    else if(n<0)
       printf("no. is negative");
    else
    printf("invalid no.");
     


    int age;
    printf("Enter a no: ");
    scanf("%d",&age);
    if(age>18)
       printf("She is eligible for voting");
    else if(age<18)
        printf("She is not eligible for voting");
    else
        printf("invalid age");



     int n;
    printf("Enter a number :");
    scanf("%d",&n);
    if(n%2==0)
       printf("Even number is %d",n);
    else
       printf("odd number is %d",n);



    int a,b;
    printf("Enter two number :");
    scanf("%d%d",&a,&b);
    printf("%d\n%d",a,b);
    if(a>b)
       printf("\nA is greater");
    else if(b>a)
      printf("\nB is greater");



    int a,b;
    printf("Enter two number :");
    scanf("%d%d",&a,&b);
    printf("%d\n%d",a,b);
    if(a<b)
       printf("\nA is smaller");
    else if(b<a)
      printf("\nB is smaller");




   char a;
   printf("Enter any character: ");
   scanf("%c",&a);
   if(a>=65 && a<=90)
       printf("Its a upper case alphabet\n");
   else
       printf("Not a uppercase alphabet");




   char a;
   printf("Enter any character: ");
   scanf("%c",&a);
   if(a>=97&&a<=122)
       printf("Its a lower case alphabet\n");
   else
       printf("Not a lowercase alphabet");



   char a;
   printf("Enter any character: ");
   scanf("%c",&a);
   if((a>=0 && a<=47)||(a>=58&&a<=64)||(a>=91&&a<=96)||(a>=123&&a<=127))
       printf("Its a special symbol");
   else
       printf("Not a special character");




   char a;
    printf("Enter any character: ");
    scanf("%c",&a);
    
    if(a>=65 && a<=90)
       printf("Its a capital letter\n");
       
    else if(a>=97&&a<=122)
       printf("Its a small letter\n");
    
    else if(a>=48&&a<=57)
       printf("Its a digit");
       
    else if((a>=0 && a<=47)||(a>=58&&a<=64)||(a>=91&&a<=96)||(a>=123&&a<=127))
       printf("Its a special symbol");





   int c,p,m,sum;
    float avg;
    printf("Enter the 3 subjects marks: ");
    scanf("%d%d%d",&c,&p,&m);
    
    sum=c+p+m;
    printf("sum of all 3 subjects marks is %d\n",sum);
	avg= sum/3;
	printf("\nAverage of all 3 subjects marks is %.2f\n",avg);
    
    if(avg>=80){
        printf("A grade,Excellent");
    }
    else if(avg>=70){
        printf("B grade,Very Good");
    }
    else if(avg>=60){
        printf("C grade,good");
    }
    else if(avg>=50){
        printf("D grade,satisfacory");
    }
    else{
        printf("E grade,failure try again");
    }




    int i;
    for(i=1;i<=20;i++)
    {
        printf("%d\n",i);
    }



      int i,sum=0,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
        printf("%d\n",sum);
    }



    int i,n,s;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=2;i<=10;i++)
    {
        s=n*i;
        printf("%d\n",s);
    }



     int i,n,f=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
     printf("%d\n",f); 




     int n, i = 2;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    while (i < n) {
        if (n % i == 0) {
            printf("not a prime no");
            break;
        }
        i++;
    }

    if (i == n)
        printf("no is prime");