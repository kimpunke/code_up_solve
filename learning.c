#include <stdio.h>


int main (){
    int m,n,i,j;
    scanf("%d %d", &n, &m);
    for(i=1; i<=n; i++){
      for(j=1; j<=n; j++){
         if(i==1||i==8||(i+j)%3==0||j==1||j==n){
            printf("*");
         }
         else{
            printf(" ");
         }
         printf("\n");
      }
    }
    return 0;
}