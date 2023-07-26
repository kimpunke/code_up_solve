#include <stdio.h>

int main()
{
   int i, j, n;
   scanf( "%d", &n );
   for(i=0;i<n-2; i++){
      for(j=0; j<n-i-1;j++){
         printf(" ");
      }
      for(j=0; j<(i*2)+1; j++){
         printf("*");
      }
      if(i==n-3) return 0;
      printf("\n");
   }
   return 0;
}
