#include <stdio.h>

int main()
{
   int birth,year,age;
   scanf("%d",&age);
   birth=2012-age;
   printf("%d ", birth%100);
   if(2012-age>=2000){
    printf("1");
   }
   else printf("3");

   return 0;
}