#include <stdio.h>
int main() {
int i,j;
for(i=1;i<=5;i++)
{
    for(j=1;j<=10;j++)
    {
    printf("*");
    }
printf("\n");
}
return 0;
}


int i,j;
for(i=1;i<=5;i++)
{
    for(j=1;j<=i;j++)
    {
    printf("*");
    }
printf("\n");
}


int i,j,k;
for(i=1;i<=5;i++)
{
    for(j=5;j>=i;j--)
    {
        printf(" ");
    }
        for(k=1;k<i*2;k++)
        {
            printf("*");
        }
    
printf("\n");
}

int i,j,k;
for(i=1;i<=5;i++)
{
    for(j=5;j>=i;j--)
    {
        printf(" ");
    }
        for(k=1;k<i*2;k++)
        {
            printf("%d",i);
        }
    
printf("\n");
}


int i,j,k;
for(i=1;i<=5;i++)
{
    for(j=5;j>=i;j--)
    {
        printf(" ");
    }     for(k=i;k>=2;k--)
        {
            printf("%d",k);
        }
        for(k=1;k<=i;k++)
        {
            printf("%d",k);
        }
        
    
printf("\n");
}





//print s 
    int i, j;

    for (i=1;i<=7;i++) {
        for (j=1;j<=10;j++) {
            if (i==1 || i==4 || i==7) {
                printf("*");
            } else if (i==2 || i==3) {
                if (j==1) {
                    printf("*");
                } 
                else {
                    printf(" ");
                }
            }
            else if (i==5 || i==6) {
                if (j==10) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
    

//print p
    int i, j;

    for (i=1;i<=7;i++) {
        for (j=1;j<=10;j++) {
            if (i==1 || i==4) {
                printf("*");
            } else if (i==2 || i==3) {
                if (j==1||j==10) {
                    printf("*");
                } 
                else {
                    printf(" ");
                }
            }
            else if (i==5 || i==6 || i==7) {
                if (j==1) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
    


//print F
    for (i=1;i<=7;i++) {
        for (j=1;j<=10;j++) {
            if (i==1 || i==4) {
                printf("*");
            } else if (i==2 || i==3) {
                if (j==1) {
                    printf("*");
                } 
                else {
                    printf(" ");
                }
            }
            else if (i==5 || i==6 || i==7) {
                if (j==1) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    