// ------------------------------1+2+3+4+5+6+7+8+9+10=55---------------------------------------------


#include <stdio.h>

int main() {
    int i,n,s=0;
    printf("Enter any number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      printf("%d",i);
      if(i<n)
      {
          printf("+");
      }
      s=s+i;
     }
    printf("=%d",s);
    return 0;
}
// ------------------------------2 1 4 3 6 5---------------------------------------------
#include <stdio.h>

int main() {
    int n,i;t
    printf("enter a number");
    scanf("%d",&n);
    i=2;int j=1;
    while(i<=n)
    { 
        printf("\n%d",i);
        while(j<=n)
        {
        printf("\n%d",j); 
        i=i+2;
        printf("\n%d",i);   
        j=j+2;
    }
    }
    return 0;
}


#include <stdio.h>

int main() {
    int n,i;
    printf("enter a number");
    scanf("%d",&n);
    for(i=2;i<=n;i=i+2)
    { 
        printf("\n%d",i);
        for(int j=1;j<=n;j=j+2)
        {
        printf("\n%d",j); 
        i=i+2;
        printf("\n%d",i);   
    }
    }
    return 0;
}

// ------------------------------1 2 4 8 16---------------------------------------------
#include <stdio.h>

int main() {
    int i,n,s=0,j;
    printf("Enter any number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      printf("\n%d",i);
      i=2*i-1;
     }
    // printf("=%d",s);
    return 0;
}

// ------------------------------1 3 7 15 31---------------------------------------------


#include <stdio.h>

int main() {
    int i,n,s=0,j;
    printf("Enter any number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      
      i=2*i-1;
      printf("\n%d",i);
     }
    // printf("=%d",s);
    return 0;
}

// --------------------------------------0 3 8 15 24 35 48 63 80----------------------------------------------

#include <stdio.h>

int main() {
   int i,j,n;
    printf("Enter any number ");
    scanf("%d",&n);
     for(i=0;i<=n;i++)
     {
       for(j=3;j<=n;j++)
       {
           printf("\n%d",i);
              i=i+j;
            j++;
       }
     }
    return 0;
}