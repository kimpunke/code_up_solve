#include <stdio.h>


int main (){
    int m,n,i,j;
    scanf("%d %d", &n, &m);
    for(i=0; i<n; i++){
      for(j=1; j<=n; j++){
         if(i==0||i==n-1||(i+j)%m==0||j==1||j==n){
            printf("*");
         }
         else{
            printf(" ");
         }
      }
      printf("\n");
    }
    return 0;
}