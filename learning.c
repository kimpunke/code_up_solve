#include <stdio.h>

int main(){
    int a,b,c;
    scanf("%d", &a);
    for(b=1;b<=a;b++){
        if(b%2==0){
            c=c+b;
        }
    }

    printf("%d",c);
    
    return 0;
}

