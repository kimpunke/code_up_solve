#include <stdio.h>

int main()
{
   int i, j, n;
   scanf( "%d", &n );
   for(i=1;i<=n-2;i++){
      for(j=1; j<=n-i-2; j++){
         printf(" ");
      }
      for(j=1; j<=(i*2)-1;i++){
         printf("*");
      }
      printf("\n");
   }
   return 0;
}
