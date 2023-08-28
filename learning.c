#include <stdio.h>

int main()
{
   int birth,year,age;
   scanf("%d",&age);
   birth=2013-age;
   printf("%d ", birth%100);
   if(2012-age>=2000){
    printf("3");
   }
   else printf("1");

   return 0;
}