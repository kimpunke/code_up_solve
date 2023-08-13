#include <stdio.h>

int main()
{
   int time,score;
   scanf("%d %d",&time,&score);
   while(time<90){
    time+=5;
    score++;
   }
   printf("%d",score);
   
   return 0;
}
