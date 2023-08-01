#include <stdio.h>


int main (){
    int i,j,height,weight,count;
    char space;
    scanf("%d %d %c", &height, &weight, &space);
    if(space='R'){
      for(i=1; i<=height; i++){
         for(j=1; j<=height-i; j++){
            printf(" ");
          }
         for(j=1; j<=weight; j++){
            printf("*");
         }
         printf("\n");
      }
    }
    else {
      count = 1;
      for(i=1; i<=height; i++){
         for(j=1; j<count; j++){
            printf(" ");
         }
         for(j=1; j<=weight; j++){
            printf("*");
         }
         printf("\n");
      }
    }
    return 0;
}