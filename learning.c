#include <stdio.h>

int main()
{
   int a,b,c;
   scanf("%d %d %d",&a,&b,&c);
   if(a==b||b==c){
    printf("%d",b);
   }
   else if(a>b&&a>c){
    if(b>c){
        printf("%d",b);
    }
    else{
        printf("%d",c);
    }
   }
   else if(a<b&&b>c){
    if(a>c){
        printf("%d",a);
    }
    else{
        printf("%d",c);
    }
   }
   else if(c>a&&c>b){
    if(a>b){
        printf("%d",a);
    }
    else{
        printf("%d",c);
    }
   }
   else{
    printf("%d",a);
   }
   
   return 0;
}
