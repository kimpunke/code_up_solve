#include <stdio.h>


int main (){
    int n,i,j,k,count;
    scanf("%d", &n);
    for(i=1; i<=n; i++){
      if(i%(n-1)==1){
         for(j=1; j<=n; j++){
            printf("*");
         }
      }
      else if(n%i==(i-1)){
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
    }
    return 0;
}