#include <stdio.h>

int main()
{
   int birth,year,age;
   scanf("%d %d",&birth,&year);
   if(year<=2){
    age=birth/10000;
    printf("%d",2012-1899-age);
   }
   else{
    age=birth/10000;
    printf("%d",2012-1999-age);
   }

   return 0;
}
