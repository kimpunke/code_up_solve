#include <stdio.h>

int main()
{
   int i,j,k,n,m,count=0;
   scanf( "%d %d", &n ,&m);
   for(i=0; i<m; i++){
    for(j=0; j<n; j++){
        for(k=0; k<count; k++){
            printf(" ");
        }
        printf("*");
        count++;
        printf("\n");
    }
    count-=2;
    for(j=0; j<n-1; j++){
        for(k=0; k<count; k++){
            printf(" ");
        }
        printf("*");
        count--;
        if(i==m&&j==n-1) return 0;
        printf("\n");
    }
   }
   return 0;
}
