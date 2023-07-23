#include <stdio.h>
int f(int a){
   if(a==1) return 1;
   else {
      return a+f(a-1);
   }
}

int main (){
    int n,i,j,count;
    scanf("%d", &n);
    count = f(n);
    for(i=1; i<=n; i++){
      for(j=1; j<=i; j++){
         printf("%d ", count);
         count--;
      }
      printf("\n");
    }
    return 0;
}