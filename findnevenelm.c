// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int i=2,n,count;
    printf("Enter n: ");
    scanf("%d",&n);
    while(i<=n){
        if(n%2==0){
            printf("%d\t",i);
            count++;
            i=i+2;
        }
    }
printf("\nTotal count is %d",count);
    return 0;
}