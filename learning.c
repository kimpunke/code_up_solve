#include <stdio.h>

int main()
{
   int grade,class,number;
   scanf("%d ",&grade);
   scanf("%d ",&class);
   scanf("%d ",&number);
   printf("%d%d",grade,class);
   if(number>=10) printf("%d",number);
   else printf("0%d",number);
   
   return 0;
}