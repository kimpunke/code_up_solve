#include <stdio.h>


int main (){
    int n,i,j,k,count;
    scanf("%d", &n);
    count=2;
    for(i=1; i<=n; i++){
      if(i%(n-1)==1){
         for(j=1; j<=n; j++){
            printf("*");
         }
      }
      else if(n%2!=0&&i==(n/2)+1){
         for(j=1; j<=n; j++){
            if(j%(n-1)==1){
               printf("*");
            }
            else if(j==(n/2)+1){
               printf("*");
            }
            else {
               printf(" ");
            }
         }
      }
      else if(i<(n/2)+1){
         for(j=1; j<=n; j++){
            if(j==1||j==n){
               printf("*");
            }
            else if(j==count||j==(n-count)+1){
               printf("*");
            }
            else{
               printf(" ");
            }
         }
         count++;
      }
      else{
         for(j=1; j<=n; j++){
            if(j==1||j==n){
               printf("*");
            }
            else if(j==count||j==(n-count)+1){
               printf("*");
            }
            else{
               printf(" ");
            }
         }
         count--;
      }
      
      printf("\n");
    }
    return 0;
}