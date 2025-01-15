#include <stdio.h>
int main() 
{
   char a[20]="Hello class!";
   printf("String is %s",a);
   return 0;
}



int main() 
{
   char a[20];
   printf("Enter String:");
   //scanf("%s",a);
  // printf("string is %s",a);
   gets(a);
   puts(a);
   return 0;
}




#include<stdio.h>
#include<string.h>
int main() {
   char a[20];
   int x;
   printf("Enter String :");
   gets(a);
   //puts(a);
   printf("string is: %s",a);
   x=strlen(a);
   printf("\n length of the string: %d",x);
   strupr(a);
   printf("\n Uppercase: %s",a);
   strlwr(a);
   printf("\n Lowercase: %s",a);
   strrev(a);
   printf("\n Reverse string: %s",a);
   return 0;
}


// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
int main() {
   char a[20],b[20];
   int x;
   printf("Enter 1st String:");
   gets(a);
   strcpy(b,a);
   printf("\nCopied string of b: %s",b);
   printf("\nEnter 2nd String:");
   gets(b);
   strcat(a,b);
   printf("\n Concatenated string: %s",a);
   return 0;
}



#include <stdio.h>
#include <string.h>
int main() {
   char a[20],b[20];
   int x;
   printf("Enter 1st String:");
   gets(a);
   printf("\nEnter 2nd String:");
   gets(b);
   x= strcmpi(a,b);
   if(x==0)
   printf("Strings are same");
   else
   printf("Strings are different");
   return 0;
}



//working
#include <stdio.h>
#include <string.h>
int main() {
   char a[20],b[20];
   int x;
   printf("Enter 1st String:");
   //gets(a);
   scanf("%s",a);
   printf("Enter 2nd String:");
   scanf("%s",b);
   //gets(b);
   x=strcmp(a,b);
   if(x==0)
   printf("Strings are same");
   else
   printf("Strings are different");
   return 0;
}


#include <stdio.h>
#include <string.h>
int main() {
   char a[200];
   int x,i,c=0;
   printf("Enter 1st String:");
   //gets(a);
   scanf("%s",a);
   x=strlen(a);
   for(i=0;i<x;i++)
   {
   if(a[i]==97)
   c++;
   }
   printf("string is %s",c);
   return 0;
}