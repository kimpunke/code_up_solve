#include <stdio.h>

int main()
{
   int i,j,k,n,count=1,count2=0;
   scanf( "%d", &n);
   for(i=1; i<=n; i++){
    for(j=1; j<=n-count; j++){
        printf(" ");
    }
    printf("*");
    for(j=1; j<=count2; j++){
        printf(" ");
    }
    printf("*");
    count++;
    count2+=2;
    printf("\n");
   }
   count2-=2;
   count--;
   for(i=1; i<=n; i++){
    for(j=1; j<=n-count; j++){
        printf(" ");
    }
    printf("*");
    for(j=1; j<=count2; j++){
        printf(" ");
    }
    printf("*");
    count--;
    count2-=2;
    printf("\n");
   }
   

   
   return 0;
}
